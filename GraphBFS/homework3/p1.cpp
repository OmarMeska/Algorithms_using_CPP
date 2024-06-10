#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int
#define tc       \
    ll test;     \
    cin >> test; \
    while (test--)
#define vi vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " "
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x)     \
    for (auto i : x) \
    cout out i spacef
#define oo 1000000

int di[]={0,0,1,-1} ;
int dj[]={-1,1,0,0} ;







////////////////////////// "Walls and Gates "////////////////////////////////

bool valid(vector<vector<int>>&graph,vector<vector<int>> &vis,int i ,int j){
    return (i>=0 and j>=0 and i<graph.size() and j<graph.size() and graph[i][j]!=-1 and vis[i][j]==0) ;
}



int bfs (vector<vector<int>>&graph,int z ,int x ){

queue<pair<int,int>> q; 
vector<vector<int>> vis(graph.size() ,vector<int>(graph.size(),0)) ;


q.push({z,x}) ;
vis[z][x]=0 ;
cout out z out " " out x out endl;
cout out endl ;
for (int level=0 , sz=1 ; !q.empty () ; level++ ,sz=q.size()){
    while(sz--){
        
        int i = q.front().first ;
        int j = q.front().second;
         cout out i out " " out j out endl ;
        q.pop() ;
        for (int k=0 ;k<4;k++){
            int newi = di[k]+i ;
            int newj = dj[k]+j ;

            
            if (valid(graph,vis,newi,newj)){
                q.push({newi,newj}) ;
                vis[newi][newj]=level+1 ;
            }
            if (valid(graph,vis,newi,newj) and graph[newi][newj]==0)return level+1 ;


        }
    }
}

return graph[z][x]; 
}


//////////////////////////////// "more efficient implementation"/////////////////////
////////////////////////reverse thinking////





void bfs2(vector<vector<int>>&matrix){
    int rows =matrix.size(),cols=matrix[0].size() ;
    vector<vector<int>>visited(rows,vector<int>(cols,0)) ;
    queue<pair<int,int>> q;

    //Add all BFs starting points 
    for (int r=0 ;r<rows ;r++){
        for (int c=0 ; c<cols ;c++){
            if(matrix[r][c]==0){
                q.push({r,c}) ;
                visited[r][c]=1 ;
            }
        }
    }

    for(int level=0 , sz=q.size() ;!q.empty() ;level++,sz=q.size()){
        while(sz--){
            int r =q.front().first , c=q.front().second;
            q.pop() ;

            for (int d =0 ;d<4;d++){
                int nr=r+di[d] ,nc=c+dj[d] ;
                if(!valid(matrix,visited,nr,nc))continue; 
           
           if(matrix[nr][nc]!=0 and matrix[nr][nc]!=-1){
            matrix[nr][nc]=level+1 ;
           }
              
              q.push({nr,nc}) ;
              visited[nr][nc]=1 ;
            }
        }
    }
}



class Solution{
    public:
    void walls(vector<vector<int>>&rooms){
        bfs2(rooms) ;
    }
};



int main (){
      int  n; 
      cin in n; 
      vector<vector<int>>graph(n,vector<int>(n)) ; 
      for (auto &i:graph) {
        for (auto &j:i) cin in j ;
      }
     for (int i=0 ;i<n ;i++){
        for (int j=0;j<n;j++){
            if (graph[i][j]!=-1 and graph[i][j]!=0){
               int x = bfs(graph,i,j) ;
               cout out "x is " out x out " " ; 
               graph[i][j]=x ;
            }
        }
        cout out endl ;
     }
     for (int i=0 ;i<n ;i++){
        for (int j=0 ;j< n;j++){
            cout out graph[i][j] out " " ;
        }
        cout out endl ;
     }
        return 0 ;
}