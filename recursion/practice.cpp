#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int
#define tc       \
    ll test;     \
    cin >> test; \
    while (test--)
#define vi vector<ll>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
#define INF 1e18
#define MOD 1000000007
#define ff first
#define ss second
#define in >>
#define out <<
#define space << " "
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x)     \
    for (auto i : x) \
    cout out i spacef

#define N 105
ll mod = 100000000000000000 + 2;
int freq[1000000] = {0};
ll fastpower(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2)
        {
            ans = ans * a;
        }
        a = a * a;
        b /= 2;
    }
    return ans;
}



//   int ans =-1 *(1e18);
//  int   func (int i , int j  ,int sum ) {
//  if (i == n-1 and  j==m-1){
      
//       ans = max (ans , sum ) ;
//       return ans ;
      
//  } 
      

//       func (i , j+1 , sum +arr[i][j]) ;
//       func (i+1 , j , sum +arr[i][j]) ;


       
 
//  }

int main () {
 int t; 
 cin in t; 
 while (t--){
    
    int n; 
    cin in n; 
    vector < int > vec (n) ;
     for (auto &i:vec) cin in i ;
       vector < int > nums; 
    
    if (n==1 ) {cout out "YES\n" ; continue ;}
    
        for (int i=0 ;i<n-1;i++){
             if (vec[i]==vec[i+1]){ 
                continue; 
             }
             else {
                 nums.pb(vec[i]) ;
             }
        }
        if (vec[n-1]==vec[n-2]) nums.pb(vec[n-1]) ;

        if (nums.size()==1) {
             cout out "YES\n" ; 
             continue; 
        }
        int cnt =0 ;
         for (int i=0 ;i< nums.size();i++){
             if ( i==0) {
                 if (nums[i+1]>nums[i])cnt++ ;
             }
             else if (i==nums.size()) { 
                if (nums[i-1]>nums[i])cnt++ ;
             }

             else {
                 if (nums[i-1]>nums[i] and nums[i+1]>nums[i])cnt++ ;
             }
         }
          if (cnt != 1 ) { 
            cout out "NO" ;
          }
           else cout out "YES" ; 
           cout out endl ;
 }
     return 0 ;     
}



