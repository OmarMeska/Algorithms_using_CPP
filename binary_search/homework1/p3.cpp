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
////////////////////////////////////////////////////////////////
bool possible (int n, long long rows )
{
    long sum=(rows * (rows+1)) /2  ; 
    return n >=sum ;
}
int arrangeCoins (int n)
{
    int left =0 , right =n , answer =0 ;
    while (left <=right )
    {
        int mid =left + (right-left) /2 ; 
        if (possible ( n , mid ))
        left =mid +1 , answer = mid ;
        else 
        right = mid -1 ; 

    }
    return answer ;
}
int main ()
{fast ;
  int n; 
  cin >> n; 
  arrangeCoins(n) ; 
  
return 0;
}
