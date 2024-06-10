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
bool possible ( vector <int > &nums ,int m , int k  ,int mid )
{
    int adjDays =0 ;
    int pouckets =0 ; 
    for (int i=0 ;i < nums.size() ; i++ )
    {
        if ( nums[i]<= mid)
        {
            adjDays ++ ; 
            if (adjDays >= k)
            {
                adjDays = 0 ;
                pouckets ++ ; 
                if ( pouckets >= m )
                {
                    return true ;
                }
            }
        }
        else adjDays =0 ; 
    }
    return false ;
}
int get_minDays (vector <int > & nums , int m , int k ) 
{

    int start =1 ,end = *max_element(nums.begin(),nums.end()) ; 
    int minDays= -1 ;
    while (start <= end)
    {
        int mid = start + (end-start )/2 ;
        if (possible ( nums , m ,k , mid))
         {
           minDays =mid ;
           end = mid-1 ;

         }
         else 
         start = mid+1 ;
    }
    return minDays ;
}
int main ()
{fast ;
    int n ; 
    cin >>  n; 
    vector <int > bloomday (n) ;
    for (auto &i:bloomday) cin >> i ;
    int  m, k ;
     cin >> m >> k ;
   cout <<  get_minDays (bloomday, m , k ) ; 
      return 0 ;
}
