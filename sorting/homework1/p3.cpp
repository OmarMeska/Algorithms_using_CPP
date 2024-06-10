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
//this problem is more trecky than the previos one such that the renge of the value is [-100000 ,100000] 
// but the thing that will help us to solve is that the max value-min value  is less than or equal to 500 
// we can subract the minimum value from the whole array and add it again in the end of the algorithn 

vector <int > count_sort_neg(vector <int > & nums )
{
    int max_val = nums[0] ; 
    int min_val = nums[0] ;
    for (int i=0 ;i < nums.size() ; i++)
    { 
        max_val = max(max_val,nums[i]);
        min_val=min(min_val,nums[i]);
    }
    int new_max_val =max_val -min_val ;
    for (int i =0 ;i< nums.size() ; i++)
    {
        nums[i] -= min_val ;
        freq [nums[i]] ++ ; 

    }
    vector <int > intial_nums ;
    for (int i=0 ;i < new_max_val ; i++)
    {
      if (freq [i])
      {
          for (int j=0 ;j <freq[i] ;j ++)
          {
                intial_nums.push_back(i +min_val) ;
          }
      }
    }
    return intial_nums ;

}
int main ()
{
 
vector <int > num = {-1,4,-3,4,3,-1,5,1,4,2,-23,6,0,7,1,2,3,-3,6,-101,102,100} ; 
vector <int > sol =count_sort_neg (num)
 ; 
 for (auto i :sol ) cout << i << " "
;
return 0;
}