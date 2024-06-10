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
//////////// "find first and last position of element in sorted  array "///////////
int FindFirst (vector <int > &nums , int val)
{
    int position =-1 ;
    int start =0  , end = (int ) nums.size()-1 ;
    while (start <=end)
    {
        int mid = start + (end -start ) /2 ;
        if (nums [mid ] <val)
        start = mid +1 ;
        else if (nums [mid ] >val) 
        end = mid -1 ;
          else 
          {
            end =mid-1 ;
            position =mid ; 
          }
    }
    return position ; 
}
int FindLast(vector <int > &nums , int val)
{
    int position =-1 ;
    int start =0  , end = (int ) nums.size()-1 ;
    while (start <=end)
    {
        int mid = start + (end -start ) /2 ;
        if (nums [mid ] <val)
        start = mid +1 ;
        else if (nums [mid ] >val) 
        end = mid -1 ;
          else 
          {
          start =mid +1; 
          position =mid ; 
          }
    }
    return position ; 
}
int main ()
{fast ;
 int n; 
 cin >> n; 
 vector <int > nums (n) ;
  for (auto &i :nums ) cin >> i ;
  int target ; 
  cin >> target ; 
 cout << FindFirst ( nums,target  ) <<endl ;
 cout <<FindLast (nums,target) ;
return 0;}
