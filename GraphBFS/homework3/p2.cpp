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




bool valid(vector<vector<int>>&graph,vector<vector<int>> &vis,int i ,int j,int parenti , int parentj){
    return (i>=0 and j>=0 and i<graph.size() and j<graph.size() and graph[i][j]<= graph[parenti][parentj]and vis[i][j]==oo) ;
}



bool bfs (vector<vector<int>>&graph,int z ,int x ){

queue<pair<int,int>> q; 
vector<vector<int>> vis(graph.size() ,vector<int>(graph.size(),oo)) ;


q.push({z,x}) ;
vis[z][x]=0 ;
bool flag1 =0 ,flag2=0 ;
// cout out z out  " " out x out endl out endl ;
for (int level=0 , sz=1 ; !q.empty () ; level++ ,sz=q.size()){
    while(sz--){
        
        int i = q.front().first ;
        int j = q.front().second;
        q.pop() ;


        for (int k=0 ;k<4;k++){
           
            int newi = di[k]+i ;
            int newj = dj[k]+j ;
           
              if (newi<0 or newj<0 ) {flag1=1 ;}
              if(newi>=(int)graph.size() or newj>=(int)graph.size()){ flag2=1 ;}
              if (flag1==1 and flag2==1 ){
                return true; }
           
            
            if (valid(graph,vis,newi,newj,i,j)){
                q.push({newi,newj}) ;
                vis[newi][newj]=level+1 ;
            }


        }
    }
}

return false; 
}

int main (){
      int  n; 
      cin in n; 
      vector<vector<int>>graph(n,vector<int>(n)) ; 
      for (auto &i:graph) {
        for (auto &j:i) cin in j ;
      }
      vector<pair<int,int>> vp; 
     for (int i=0 ;i<n ;i++){
        for (int j=0;j<n;j++){
           if(bfs(graph,i,j)){
                   vp.pb({i,j}) ;
              }
        }

     }
     for (auto i:vp){
        cout out i.first out " " out i.second out endl ;
     }

        return 0 ;
}