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

int main ()
{
   fast ;
   int n;
   cin >> n; 
   vector <int > nums (n) ;
    for (auto &i : nums)cin >> i ;
    sort (nums.begin (), nums.end()) ;
    vector <int > largest ;
    for (int i =n -1 ;i>=2; i--)
    {
        if (nums[i] +nums[i-1]>nums[i-2] and nums [i]+nums[i-2] >nums[i-1] and nums [i-1] +nums[i-2] > nums [i])
        {
            largest.push_back(nums[i] +nums[i-1] +nums[i-2]);

        } 

    }
    if (largest.size()==0)
    {
        cout << 0 ;
        return 0 ; 
            } 
    sort (largest.begin (), largest.end ()) ;
    cout << largest.back () ; 

return 0;
}