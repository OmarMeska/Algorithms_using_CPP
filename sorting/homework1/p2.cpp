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
//this with map 
vector <int > count_sort_neg(vector <int > & nums )
{
     int min_val =nums[0] ;
     int max_val =nums[0] ;
     map <int  ,int > mp ;
     map <int,int  > tmp ;
     for (int i=0 ;i<nums.size() ;i++)
     {
             min_val=min(min_val ,nums  [i]); 
             max_val =max(max_val ,nums[i]) ;
     mp [nums [i]] ++ ; 
     }
     for (int i = min_val ; i <= max_val ; i++) 
     {
         if (mp[i])
         {
             for (int j=0 ;j <mp [i]  ;j++)
{
    cout << i << " " ;

}
         }
     }
}
// this is another solution with a trick 
vector <int > count_sort_neg_v2 (vector <int > & nums)
{
    int shift =50000 ; //this is the trich that we shift the intial values by 50000 to get the range [0.100000] 
    int max_val =nums[0 ] ;
    for (int i =0 ; i<nums.size() ; i++)
    {
        nums[i] += shift ;
        freq[nums[i]] ++ ; 
        max_val =max (max_val,nums[i]);
    
    }
    vector <int > the_new_one  ;
    for (int i=0 ;i <=max_val ;i++)
    {
        if (freq[i])
        {
            for (int j=0 ;j <freq[i] ; j++)
            {
                  the_new_one.push_back(i-shift) ;
            }
        }
    }
    return the_new_one ;
}
int main ()
{
 
vector <int > num = {-1,4,-3,4,3,-1,5,1,4,2,-23,6,0,7,1,2,3,-3,6,-101,102,100} ; 
vector <int > itial =count_sort_neg_v2 (num); 
for (auto i:itial) cout << i << " " ;

return 0;
}