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
#define oo 1000000
class Solution{
 bool inrange(ll num ,ll low, ll high){
    return low<=num and num <=high ;
 }
 bool process(queue<ll>&q,vector<int>&answer,ll low ,ll high ,ll num){
    if(num>high)return false;
    if(inrange(num,low,high)) answer.push_back(num) ;
    q.push(num) ;
    return true;
 }
 public:
 vector<int>countSteppingNumbers(ll low ,ll high){

    queue<ll> q; 
    vector<int> answer ;
    if (inrange(0,low,high))
     answer.pb(0) ;
  
     for (int i=1;i<=9 ;i++){
        q.push(i) ;
        if(inrange(i,low,high))
        answer.pb(i) ;
     }
 cout out "whilat" ;
     for (int level =0 ,sz=q.size() ;!q.empty() ;level++,sz=q.size()){
        while(sz--){
            ll num =q.front() ;
            q.pop() ;

            int last_digit=num%10 ;
            if(last_digit!=0 and !process(q,answer,low,high,num%10+last_digit-1))
            break;
            if(last_digit!=9 and !process(q,answer,low ,high,num*10+last_digit+1)) 
            break;
        }
     }
     return answer;
 }
} ;
int main (){
    Solution s ;
    int low , high ;
    cin in low in high ;
  vector<int> sol =   s.countSteppingNumbers(0 ,1000) ;
         for (auto i:sol) cout out i out " " ;

         return 0 ;
}