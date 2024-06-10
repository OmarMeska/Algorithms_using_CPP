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
int freq[1000000] = {0};
ll mod = 100000000000000000 + 2;
ll fastpower(ll a, ll b){ll ans = 1;while (b){if (b % 2){ans = ans * a;}a = a * a;b /= 2;}return ans;}
int x ;
/* get the square root for x */
int main() {fast;
cin in x ;
double start =0 ,end =x  ; 
while ( end -start > 1e-9){
    double mid = start +(end -start) /2 ; 
     double ans = pow (mid ,2) ; 
     if (ans <x  ){
      start = mid ; 
     }
     else if ( ans > x){
 end = mid ;
     } 
     else {
    int j = mid ;
    cout out j ;
    return 0 ; 
     }


}
int j = end; 
 cout out j out endl ;
 
return 0; 
 } 