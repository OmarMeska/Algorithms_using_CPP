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
vector <int > countsort (const vector <int > &nums)
{


    //find tyhe largest element of the array 
    int size = nums.size() ;
    int mxval =nums[0] ;
    for (int i=1 ;i<size ;i ++)
    {
        mxval =max (mxval ,nums[i]) ;
    }



    //compute frequency 
    vector <int > count (mxval+1 ) ; 
    for (int i=0 ;i < size ;i++)
    {
        count [nums[i]] ++ ;
    }


    //Accumulate the counting 
    for (int i=1 ;i<=mxval ;i++)
    {
        count [i]+=count [i-1] ;
    }


    //find the index and put the number 
    vector <int > output (size) ; 
    for (int i=size -1 ; i>=0 ;i--)
    {
        output [count[nums[i]]-1] =nums [i] ; 
        count [nums [i]] -- ;
    }
    return output ;

}
int main ()
{
 
vector <int > num = {-1,4,-3,4,3,-1,5,1,4,2,-23,6,0,7,1,2,3,-3,6,-101,102,100} ; 

return 0;
}