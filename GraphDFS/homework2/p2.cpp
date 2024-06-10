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

vector <vector <int >> grid ;
int n  ,m ;
vector <vector <bool>> visted ;
int id []={0 ,0 ,1 ,-1} ;
int xd []={1 ,-1 ,0 ,0} ;


bool isValid(int i ,int j , int currentColor){
  if (i>=0 and i<n and j>=0 and j<m and visted[i][j]==0 and grid [i][j]==currentColor){
       for (int k=0;k<4 ;k++){
           int newi = id[k]+i  ;
            int newj = xd[k]+j ;
            if (newi<0 or newi>n or newj<0 or newj>m) return true ;
            if (grid[newi][newj]!=currentColor) return true;  
       }
  }
  return false ;
}

void implement (int i, int j , int currentColor , int newColor){
  
   visted[i][j]=1 ; 
   grid[i][j]=newColor ;
    
     for (int k =0;k<4;k++){
       int newi = id[k] + i;
        int newj =xd[k]+ j;
        if(isValid(newi, newj, currentColor)){
          implement(newi, newj ,currentColor , newColor); 
                  }
     }
}

void print (vector <vector <int >> &grid){
   for (auto i:grid){
    for (auto j:i ) cout out j out " " ; 
    cout out endl ;
   }
}

int main (){
 cout out "enter size \n" ;

 cin in n in m ;
  grid = vector <vector <int > >(n , vector < int > (m)) ;  
   visted = vector <vector <bool > >(n , vector < bool> (m)) ;  
     
      cout out "enter the grid\n" ;
       for (auto &i:grid){
        for (auto &j:i) cin in j ;
       }
       cout out "enter you newcolor" ; 
       int newColor ; 
       cin in newColor ;
       cout out "enter current idx" ;
        int i , j ;
        cin in i  in j; 
        int currentColor = grid[i][j] ; 
        implement(i, j , currentColor , newColor) ; 
        print (grid) ;
    return 0 ;
}