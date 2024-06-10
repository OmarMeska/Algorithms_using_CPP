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

//////////////////////////////"count sub-islands "///////////////////////////////////////////
class Solution {
 int dr[4] ={0,0,1,-1} ; 
 int dc[4] ={1,-1,0,0} ; 
 
  bool is_sub_island ;

   bool isValid(int r, int c ,vector <vector <int > > &grid2){
      
       if (r>=0 and r<grid2.size() and c>=0 and c<grid2[0].size()  )return true ;

       return false ;
   }



   public :
    void dfs (int r , int c , vector <vector <int >> &grid1 ,vector <vector <int >> grid2){
        if (!isValid(r,c,grid2) or grid2[r][c]==0) return  ;
         if (grid2[r][c] and !grid1[r][c]){
            is_sub_island =0 ;
            return ;
         }
         grid2[r][c] =0 ;
         for (int k=0 ;k<4;k++) {
            dfs(r+dr[k] ,c+dc[k] ,grid1,grid2) ;

         }
    }
         int countSubIslands(vector <vector <int >> &grid1, vector <vector <int >> &grid2){
            int count =0 ;
             for(int i=0 ;i<(int ) grid2.size() ;i++){
                for (int j =0 ;j<(int ) grid2[0].size() ;j++){
                    if (grid2[i][j])
                 {
                     is_sub_island =1; 
                     dfs(i,j,grid1,grid2);
                     count+=is_sub_island ;
                 }
                }
             }   
              return count; 
             }
    

};

int main (){
 Solution sol ; 
 int n , m ;
  cout << "enter size\n" ;
  cin in n in m ;
   
      vector <vector <int >> grid1 (n ,vector <int > (m)) ;
      vector <vector <int >> grid2 (n ,vector <int > (m)) ;
   cout out "enter the first grid \n" ;
   for (auto &i:grid1) for (auto &j:i) cin in j; 
    cout out "enter the second grid\n" ;
   for (auto &i:grid1) for (auto &j:i) cin in j; 

   cout out sol.countSubIslands(grid1,grid2) ;
    return 0 ;
}
/*
enter size
5 5
enter the first grid
1 1 1 0 0
 0 1 1 1 1
 0 0 0 0 0
1 0 0 0 0
1 1 0 1 1
enter the second grid
1 1 1 0 0
0 0 1 1 1
0 1 0 0 0
1 0 1 1 0
0 1 0 1 0
*/