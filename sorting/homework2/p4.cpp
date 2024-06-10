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
int  freq[101]={0} ;
//monsters 
int main ()
{
 int n; 
 cin >> n; 
 vector <int > vec(n) ; 
 for (auto &i: vec)
 {
  cin >> i  ;
 }
 int k ; 
 cin >> k ; 
 int mn = vec[0] , sum =0 ; 
 for (int i=0 ;i < n;i ++ )
 {
  if (k and vec [i]<0)
  {
     k-=1 ;
     vec [i]*=-1 ;
  }
  sum += vec[i] ; 
  mn =min (mn , vec[i] ) ; 
 }
 if (k%2)
 {
  sum-=2*mn ;
 }
 cout << sum ;
 
 return 0;
}