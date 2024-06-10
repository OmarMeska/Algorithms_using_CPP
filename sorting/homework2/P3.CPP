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
void get_largest_sum ( vector <int > &sums)
{
    int maximum =0 ;
    for (int i=0 ;i < sums.size() ;i++)
    {
        maximum = max(maximum,sums[i]);
    }
    cout << maximum ;

  

}
void get_vector_sums (vector <pair <int ,int >> &pairs)
{

    vector <int > sums ;
    int sum =0 ;
    
      for (int i=0 ;i <pairs.size()/2 ; i++) 
      {
          sum = min (pairs[i].first,pairs[i].second) + min (pairs[i+1].second,pairs[i+1].first) ;
       sums.push_back (sum) ;

      }
      get_largest_sum (sums ) ; 

}
int main ()
{
 int  n; 
 cin >> n; 
 vector <int > vec  ;
 vector <pair <int ,int >> pairs ;
 for (int i=0 ;i < n ;i ++)
 {
    int a ;
    cin >>a ; 
    vec.push_back (a) ; 
 }
 vector <vector <int >> sol  ; 
 for (int i=0 ;i < n; i ++)
 {
    for (int j=i+1 ;j <n ;j++)
    {
        pairs .push_back(make_pair (vec[i],vec[j]));

    }
 }
 get_vector_sums (pairs ) ;
return 0;
}