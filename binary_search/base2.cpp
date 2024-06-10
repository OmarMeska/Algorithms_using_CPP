#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pll pair<ll,ll>
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
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)
#define N 105
int  freq[1000000]={0} ;
ll fastpower (ll a , ll b )
{ll ans=1;while(b){if (b%2){ans=ans*a ;} a=a*a ;b/=2 ;}return ans ; }
int main ()
{fast ;
vector <int > v {4,2,4,2,9,5,17,1,7,45} ;
sort (v.begin(),v.end());
// 1 2 2 4 4 5 7 9 17 45 
vector <int > :: iterator it =lower_bound (v.begin(),v.end(),17) ;
cout << it -v.begin() << endl;
it =upper_bound (v.begin(),v.end(),5) ;
cout << it -v.begin() << endl;
auto  p = equal_range (v.begin(),v.end(),5) ;
cout << p.first -v.begin() << endl;
cout << p.second -v.begin() << endl;


return 0;
}
