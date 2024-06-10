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
///////////////////// "shortest  unsorted continuous subarray" /////////////////////////////
int main ()
{
  int n;cin >> n; 
  vector <int > nums (n) ; 
  for (auto &i : nums ) cin >> i ;
  vector <int > sorted_nums  ; 
  sorted_nums = nums ; 
  sort (sorted_nums.begin (), sorted_nums.end ()) ;
  int index1 =0 ,index2=0 ;  
  bool flag1 =0 , flag2 =0 ; 
  for (int i=0 , j =n-1 ;i< n, j >=0 ; i++ , j -- )
  {
    if (sorted_nums[i] != nums[i] and !flag1)
    {
        index1 =i ;
        flag1 =1 ;
    }
    if (sorted_nums[j] != nums[j] and !flag2)
    {
        index2 =j ; 
        flag2 =1 ;
    }
    if (flag1 and flag2)
    {
        break ;
    }
  }
  if (index1 == 0 and index2 == 0)
  {
    cout << 0 ; 
    return 0  ;
  }
  cout << index2-index1 +1 << endl;
  for (int i = index1 ; i <= index2 ; i++)
 {
    cout << nums [i] << " "  ;
 }
return 0;
}