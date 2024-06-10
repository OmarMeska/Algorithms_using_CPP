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
int binary_search(vector <int > &nums , int val)
{
    int start =0 ,end=(int ) nums.size()-1 ;
    while (start <= end )
    {
        int mid = (start +end)/2 ; 
        if (nums [mid ]==val)
        return mid ;
        if (nums[mid ] < val)
        {
            start =mid +1 ;

        }
        else if (nums[mid] > val)
        end = mid -1 ;

    }
    return -1 ;
}
int main ()
{fast ;
 int n; 
  cin >> n; 
  vector <int > vec (n) ; 
  int val ;
  cin >> val; 
  for (auto &i : vec) cin >> i ; 
  sort (vec.begin (), vec.end ()) ; 
  cout << binary_search(vec ,val ) ; 

return 0;
}
