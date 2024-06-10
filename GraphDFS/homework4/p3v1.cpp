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

/////////////////////////////"path Effort"////////////////////////////////////////
int n ,m ;
vector<vector<int>>hights;
vector<vector<bool>>vis;
int minimum_Sol=INT_MAX,maximum_Effort=INT_MIN ;

int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};

bool valid (int i,int j){
      return(i>=0 and j>=0 and i<n and j<m and vis[i][j]==0 ) ;
}

void min_Effort_Path(int x, int y ,int maxEff){
    if (x==n-1 and y==m-1){
      minimum_Sol = min(minimum_Sol,maxEff) ;
    //   cout out maxEff out " endl " out minimum_Sol out endl;
      return ;
    }
            vis[x][y]=1 ;
    for (int i=0 ;i<4;i++){
        int newx = dx[i]+x ;
        int newy = dy[i]+y ;
        if (valid(newx,newy)){
            int diff = abs(hights[newx][newy]-hights[x][y]) ;
            int maxi = maximum_Effort ;
             
             maximum_Effort =max(maximum_Effort,diff) ;
    // cout out x  out " " out y out endl ;
               
             min_Effort_Path(newx,newy,maximum_Effort) ;
             
             maximum_Effort =maxi ;

             vis[newx][newy]=0 ;
        }
    }
}


int main (){
    cin in n in m;
    hights =vector<vector<int>> (n,vector<int>(m));
    vis =vector<vector<bool>> (n,vector<bool>(m));
    for(auto &i:hights)for(auto&j:i) cin in j;

    min_Effort_Path(0,0,maximum_Effort) ;
    // cout out 1 ;
    cout out minimum_Sol out endl;

        return 0 ;
}
/*
3 3 
1 2 2 
3 8 2 
5 3 5 
*/
