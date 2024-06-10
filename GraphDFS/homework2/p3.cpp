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

#define N 105
ll mod = 100000000000000000 + 2;

////////////////////   i didn't solve the third problem //////////////////////////
int n , m ; // size of the two matixs 
vector <vector <int > > matrix1 ,matrix2 ;
vector < vector <bool >> visited1 ;vector <vector <bool>> visited2  ;
vector<vector <int >> idx1(100) ,idx2(100) ;
int x []={0,0,1,-1} ;
int y []={1,-1,0,0} ;


bool valid (int r, int c , vector <vector <bool>> visited , vector <vector <int >>  matrix){
      
      if (r>=0 and r<n and c>=0 and c<m and visited[r][c]==0 and matrix[r][c]==1)return true ;
      return false ;

}

void islands (vector <vector <int >> matrix , vector <vector< bool >> visited,vector <vector <int >> idx ,int r ,int c,int cnt){
     int newr = r*n +c ;
     idx[cnt].pb(newr) ;
     visited[r][c] =1 ;
     for (int i=0 ;i<4;i++){
         int nr =x[i]+r ;
         int nc =y[i]+c ;
         if (valid (nr,nc,visited,matrix)){
           islands(matrix,visited ,idx,nr,nc,cnt)  ;            
         }
     }
}

void implement (vector <vector <bool >> visited ,vector <vector <int >> matrix,vector <vector <int >> idx){
int cnt =0 ;
    for (int i=0 ;i<n;i++){
        for (int j=0 ;j<m;j++){
            if (!visited[i][j] and matrix [i][j]==1){
                 islands(matrix ,visited ,idx ,i,j,cnt) ;
                 cnt++ ;
            }
        }
    }
}

int  countSubislands(vector<vector <int >> mat1 ,vector <vector <int >> mat2 ){
           int cnt =0 ;
           for (int i=0 ;i<mat2.size() ;i++){
           bool flag =0 ;
             for (int j=0;j<mat1.size() ;j++){
                  for (int k=0 ;k<mat2[i].size() ;k++){
                    if (find(mat1[j].begin(),mat1[j].end(),mat2[i][k])==mat1[j].end())
                    flag=1 ;
                  }
                  if (!flag){
                     cnt++ ;
                     break; 
                  }
             }
           }
           return cnt ;
}

int main (){
        cin in n in m ;
      matrix1=vector <vector < int >> (n,vector <int >(m));
      matrix2=vector <vector < int >> (n,vector <int >(m));
      visited1=vector <vector < bool >> (n,vector <bool >(m));
      visited2=vector <vector < bool >> (n,vector <bool >(m));
      cout out " enter matrix 1 \n" ; 
      for (auto &i:matrix1) for(auto &j:i) cin in j ;
       cout out "enter matrix 2 \n";
       for (auto &i:matrix2) for(auto &j:i) cin in j ;
      implement(visited1,matrix1,idx1);
      implement(visited2,matrix2,idx2);
      cout out "size of idx1 : " out idx1.size() out " \n size of idx2 : " out idx2.size()  out endl ; 
      int cnt = countSubislands(idx1,idx2) ;
       cout out endl out cnt ;
    return 0 ;
}