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
// int countBits1v2 (int num ){
//     int cnt = 0; 
//     while (num){
//         cnt ++ ; 
//         num &= (num-1) ; 
//     }
//     return cnt ;

// }  vector <int > indices ;

// vector <int > indicesOf1(int num){
//   bitset <12> x (num) ;
//   for (int i=0 ;i<=12 ;i++){
//     if (x[i]) indices.push_back(i) ;
//   }
//   return indices ;
// }
// int firstbit1 (int num){
//   bitset <10> x (num) ; 
//    int idx =0 ;
// for (int i=0 ;i<7;i++){
//   if (x[i]==1)return i ;
// }
// }
// ll  countbits (ll r){
// ll  counter =0 ; 
//   while (r){
//      r >>=1 ;
//      counter ++ ;
//   }
// return counter ;

// }
// int cont (vector <int > & vec){
//   int counter =0 ;
//   for (int i=0;i< vec.size() ;i++){
//     if (vec[i]==1)counter ++ ;
//   }
//   return counter ++ ;
// }





/// very good problem 
// missing element in sorted array 

int n ,k; 
vector <int > numbers ; 
bool valid (int mid  ){
int j= numbers [mid]- numbers [0] - mid ;
return j>= k ;
}
int main() {fast;
cin >> n  in k ; 
 numbers = vector <int > (n); 
 for (auto  &i:numbers) cin >>i ;
 // lets binary_search on the idx  
  int start =0 , end = n-1 ,sol =0 ;
   while (start <= end ){
    int mid =  start +(end-start)/2 ;
     if (valid (mid )){
        end = mid -1 ;
     }
     else {
        start = mid +1 ;
     }
   }
   sol = start -1 ;
   // handle if  the missing numbers until mid is smaller than k ; 
     int j = numbers [ sol]-numbers[0]- sol ; 
      if (j>=k ){
        sol -- ; 
        j = numbers [ sol]-numbers[0]- sol ;
      }
   // here we need to get the kth element ; 
   int y = numbers[sol]+ k - j ;
  cout out y out  endl ;
return 0; 
 } 