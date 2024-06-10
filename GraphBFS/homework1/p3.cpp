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
#define oo 10000000000

int dr[]={0,0,-1,-1} ;
int dc[]={-1,1,0,0} ;

///////////////////////////////////////"Shortest Path to Get Food"////////////////////////////

bool valid(int nr,int nc ,vector<vector<char>> &matrix,vector<vector<bool>> &visited){
    return(nr>=0 and nc>=0 and nr<matrix.size() and nc<matrix.size() and visited[nr][nc]==0 and matrix[nr][nc]!='X') ;
}


int bfs(vector<vector<char>>&matrix,pair<int,int>start){
    vector<vector<bool>>visited(matrix.size(),vector<bool>(matrix[0].size())) ;
    queue<pair<int,int>> q ;
    q.push(start) ; 
    visited[start.first][start.second]=1 ;

    for(int level =0 , sz=1;!q.empty() ; level++,sz=q.size()){
        while(sz--){
            int r=q.front().first , c=q.front().second;
            q.pop() ;
            for(int d=0;d<4;d++){

                int nr=r+dr[d],nc=c+dc[d] ;
                if(!valid(nr,nc,matrix,visited)) continue; 

                if(matrix[nr][nc]=='#')return level+1; 
                q.push({nr,nc}) ;
                visited[nr][nc]=1 ;
                
                                            }
            
        }
    }
    return -1 ;
}


class Solution {
    public:
    int getFood (vector<vector<char>> &matrix){
        pair<int,int>start;
        for(int i=0  ;i<(int)matrix.size();i++)
        for(int j=0 ;j<(int)matrix[i].size() ;j++)
            if(matrix[i][j]=='*') 
               start={i,j} ;

        return bfs(matrix,start) ;
    }
};
int main (){
        return 0 ;
}
