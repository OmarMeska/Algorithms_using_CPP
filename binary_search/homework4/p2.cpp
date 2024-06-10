#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int 
#define tc     \
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
#define space << " " <<
#define spacef << " "
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x)   \
  for (auto i : x) \
  cout out i spacef
#define mmax(x, i) x = max(x, i)
#define mmin(x, i) x = min(x, i)
#define N 105
#define pi 3.14159265
int freq[1000000] = {0};
ll mod = 100000000000000000 + 2;
ll fastpower(ll a, ll b){ll ans = 1;while (b){if (b % 2){ans = ans * a;}a = a * a;b /= 2;}return ans;}
/*

there are mpeople and n pies 
each pie is a circle with a different raidius ; 
each person should get an equally sizes ( but not necessarily equally shaped),  
   piece feom a single pie ;
what is the largest possible piece size each person can get ? 

*/
int n ,m ;
vector <double  > radius  ; 
int count (double  mid ){
    int cnt =0 ; 
    for (auto i:radius ){
        cnt += i/mid ;
    }
    return cnt ;
}
int main() {fast;
cin in n in m ;
double sum =0.0 ; 
fo (i,0,n-1 ){
    double  a ;
    cin >>a ; 
    double j =  a*a*pi ;
   sum = max (j , sum );
    radius .pb ( j ) ; 
}
for (auto i : radius ) cout  out i  out " "; 
cout out endl ;
double start =0.0 , end = sum ;
 double sol = 0.0; 
 for (int i=0 ;i <100 ; i++){
  /* 
  the for loop here is equal to the while loop 
  while ( end -start >1e-9)
  */
    double mid = (start + end )/2 ; 
  if ( count  (mid )< m) end = mid ;
  else start = mid , sol = mid ;  
 }
  cout out sol  ;
return 0; 
 } 