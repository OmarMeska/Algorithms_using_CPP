#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int 
#define tc     \
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
#define space << " " <<
#define spacef << " "
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x)   \
  for (auto i : x) \
  cout out i spacef
#define mmax(x, i) x = max(x, i)
#define mmin(x, i) x = min(x, i)
#define N 105
int freq[1000000] = {0};
ll mod = 100000000000000000 + 2;
ll fastpower(ll a, ll b){ll ans = 1;while (b){if (b % 2){ans = ans * a;}a = a * a;b /= 2;}return ans;}
/*
 assume count_len (m,n,value) => returns how many numbers < value in m*n table 
 Clearly , the bigger the valud , the bigger the return => monotonic

with this function , we can trivially search for the kth number 
    if total numbers [mid] < k , then we don`t have kth number 


how to implement count_len ?
  we can do complete brute force in o(mn)
samarter brute force : brute force on m only (the rows )
assume current tow =5 , cols =7 
this mean the row values are :1×5 , 2*5 , 3*5 ,4*5 ,5*5 ,6*5 ,7*5 

so value 30 covers 30/5 =6    6 values in theis row <= 30 
so value 33 covers 33/5 =6    6 values in this row <=33 
so value 35 covers 35/5 = 7   7value in this row <=35 
and so on until 7 after that it will not covered because  the cols is equal to 7
so in each row : min (value /r , cols )is the numbers of values <=value 

*/
int count_len (int rows , int cols , int value ){
    int count =0 ; 
    for (int r =1 ; r <=rows ; r++){
        count += min(value/r, cols) ;
    }
    return count ;
}
int main() {fast;
int n, m ,k ;  
cin in n in m in k ;  
int start =1 , end = m*n  , kth =-1 ;
while (start <=end ){
    int mid = start +(end -start )/2 ; 
    if (count_len (n ,m ,mid )<k){
        start = mid +1 ;

    }
    else end = mid-1 ,kth =mid ;
}
cout out kth ;

return 0; 
 } 