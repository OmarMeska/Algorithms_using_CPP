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
// the description for this problem is in the video number 69 in udemy course 
double msg_dist ,n  ; 
vector <double >positions ;
bool possible (double mid ){
    double last_position = positions[0]+mid ;
    for (int i=1 ;i<(int)positions.size();i++){
        double last_possible_msg_position =last_position+msg_dist ;
        

        if (positions[i]-mid > last_possible_msg_position)
        return false ; 
        last_position = min (last_possible_msg_position , positions[i]+mid) ; 
    }
    return true ;
}
int main() {fast;
cin in msg_dist in n  ;
positions = vector <double > (n); 
for (auto &i: positions) cin in i ;

double start = 0.0 , end = 1e9; 
while (end -start >1e-9){
    // for (itn i=0 ;i<100 ;i++)
    double mid = start + (end -start )/2 ;
    if (possible (mid )) end = mid ;
    else start = mid ;

}
cout out start ; 
return 0; 
 } 