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
///////////////////// "reduction operations to make the array elements equal" /////////////////////////////
int main ()
{
  /*
  5,1,3 
  */
 int n ;cin >> n; 
 map   <int,int  > mp ;
 vector <int > vec ; 
 for (int i=0  ; i<n ;i ++)
 {
    int a ; 
    cin >> a ;
    vec.push_back (a);
 }
 sort (vec.begin (), vec.end ());   
 int mn =vec[0] ;
 for (int i=0 ; i< n; i++)
 {
    mp[vec[i]] ++ ; 
 }
 vector <int > prefix ;
 for (int i =n-1 ;i >=0 and vec[i]!=mn ;i-=mp[vec[i]])
 {
    prefix .push_back (mp[vec[i]]) ;
 }
 if (prefix.size()==0 )
 {
    cout << 0 ; 
    return 0 ;
 }
 for (int i=1 ;i <prefix .size(); i++)
 {
    prefix[i] = prefix[i-1] +prefix[i];   
 }
 int sum=0  ; 
 for (int i =0 ;i < prefix .size() ;i++)
 {
    sum += prefix [i] ;

 }
 cout << sum ;
///////////////// smarter solution ///////////////
/*
int n ; 
cin >> n; 
vector <int >  vec (n) ; 
sort (vec.rbegin(), vec.rend ());
for (auto &i :vec )cin>> i ;
int operations =0 ; 
for (int i=1 ;i <n ;i++)
{
    if (vec[i]!=vec[i-1]) operations+= i; 
 
}
cout << operations << endl;

*/
return 0;
}