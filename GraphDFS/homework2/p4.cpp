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

class Solution {
   int dr[4]{-1,1,0,0} ;
   int dc[4]{0,0,1,-1} ;
   bool is_cycle ;

   public:
   int isValid (int r ,int c ,vector <vector  <char >> &grid){
    if (r<0 or r>= (int )grid.size()) return false ;
    if (c<0 or c>= (int ) grid[0].size()) return false ;
    return true; 
   }
 
   void dfs (int r,int c ,vector <vector <char >> &grid,vector <vector <bool>>&visited,char oldColor,int par_r =-1 ,int par_c =-1){
    if (!isValid(r,c,grid) or grid[r][c] !=oldColor or is_cycle)return ;
    if (visited[r][c]){
      is_cycle =true ;
      return ;}

visited[r][c]=1 ;

for (int d =0;d<4;d++){
  int nr =r+dr[d],nc=c+dc[d] ;
  if (nr == par_r and nc ==par_c) continue; 
  dfs(nr,nc,grid,visited,oldColor,r,c) ;
}


    }
   }

 ;


