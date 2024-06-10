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
///////////////////////// "  " ////////////////////////////////////
bool possible (vector <int > &houses , vector < int > &heaters ,int mid)
{
     map <int, int > mp ; 
     for (int i=0 ;i < heaters .size();i++)
     {
        for (int j= heaters[i]-mid ; j<=heaters[i]+mid;j++)
        {
            mp[j]=1 ;
        }
     }
     for (int i=0 ;i < houses.size() ;i ++)
     {
        if (mp[houses[i]]!=1)return false ;
     }
     return true ;

}
int get_min_radius (vector <int > & houses , vector <int > &heaters) 
{

  int a,b,c,d; 
  a = *max_element (heaters .begin(), heaters .end());
  b = *min_element (heaters .begin(), heaters .end()); 
  c = *max_element (houses.begin(), houses.end());
  d = *min_element (houses.begin(), houses.end()); 
  int y , x ; 
  y = abs (a-d) ; 
  x = abs (b-c) ; 
  int mx =max(y,x) ;
    int start =0,end =mx  ; 
    int minrad= 1 ;
    while (start <= end)    
    {
        int mid = start + (end-start )/2 ;
        if (possible ( houses , heaters ,  mid))
         {
           minrad =mid ;
           end = mid-1 ;

         }
         else 
         start = mid+1 ;
    }
    return minrad ;
}
int main ()
{fast ;
    int n, m ;
    cin >> n >> m ; 
    vector <int > houses (n),heaters(m) ;
    for (auto &i : houses) cin >> i ; 
    for (auto &j : heaters) cin >> j ;
   cout <<  get_min_radius ( houses , heaters ) ; 
      return 0 ;
}
