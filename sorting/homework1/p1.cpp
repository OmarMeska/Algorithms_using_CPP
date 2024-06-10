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
// this is the normal case 
/*vector <int >  descending_insertion_sort(vector <int > & nums )
{   
    if (nums.size()==1)return nums;
    for (int i=1 ;i< nums.size() ;i++)
    {
        int intial_val =nums[i] ;
        int j =i-1 ;
        while (j>=0 and nums[j]<intial_val)
        {
            nums[j+1 ]=nums[j] ;
            j-- ;
        }
        nums [j+1] =intial_val ;
    }
}
*/
// this is the case which has swap function 
vector <int >  descending_insertion_sort(vector <int > & nums )
{   
    if (nums.size()==1)return nums;
    for (int i=1 ;i< nums.size() ;i++)
    {
        int j =i-1 ;
        int intial_i = i ;
        while (j>=0 and nums[j]>nums[intial_i ])
        {
            swap (nums[j ],nums[intial_i]) ;
            j-- ;
            intial_i-- ;

        }
    }
}
int main ()
{
 
vector <int > num = {1,4,3,4,3,1,5,1,4,2,23,6,0,7,1,2,3,3,6,101,102,100} ; 
descending_insertion_sort (num) ; 
for (auto i:num) cout << i << " " ; 

return 0;
}