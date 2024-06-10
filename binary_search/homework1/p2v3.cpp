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
///////////////////////// " find right interval " ////////////////////////////////////
int FindFirst (vector <vector <  int> > & startings ,int val )
{
   int start =0 , end =(int ) startings.size() -1 ;
   int  position =-1 ;
   while (start <= end )
   {
      int mid = start + ( end-start )/2 ; 
      if (startings [mid ] [0] < val)
      start = mid +1 ;
      else if (startings [mid] [0] >= val)
      end =mid-1 , position =mid ;

   }
   return position ; 
}


vector <int > findRightIntervlal (vector <vector <int >>  &intervals )
{
   map < int , int > start_to_idx ;
    for (int i =0 ;i < (int ) intervals .size() ; i++)
    {
        start_to_idx[intervals[i][0]] = i;
    }
    vector <int > ans (intervals.size() ,-1) ; 
    for (int i =0 ;i < (int ) intervals.size() ; i++)
    {
        auto iter = start_to_idx .lower_bound(intervals[i][1]) ;
        if (iter != start_to_idx .end())
        {
            ans[ i] =iter->second ;
        }
    }
    return ans ; 
}
int main ()
{fast ;
 int n;
 cin >>  n; 
 vector <vector <int >> vec  ;
 for (int i=0 ;i < n; i++)
 {
   int a , b ;
   cin >>a >> b ;
   vec .push_back ({a,b}) ; 
   
 }
  vector < int > solution = findRightIntervlal ( vec) ; 
  for (auto i : solution ) cout  << i << " " ;

      return 0 ;
}
