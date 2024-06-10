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
#define oo 10000000000 



class Solution{
 
 char next(char c){
 if (c=='9'  ) return '0' ;
 return c+1 ;
 }
  char prev(char c) {
    if(c=='0') return '9' ;
    return c-1 ;
   }

   public:
   int openLock(vector<string>&deadends,string target){
    string start="0000" ;
    unordered_set<string>visited(deadends.begin(),deadends.end()) ;
    queue<string>q; 
    if(visited.count(start)) return -1 ;
    if(start==target) return 0;

    q.push(start) ;
    visited.insert(start) ;
    for (int level=0,sz=1 ;!q.empty() ;level++ ,sz=q.size()) {
        while(sz--){
            string cur =q.front() ;
            q.pop() ;
            for (int i=0 ;i<4;i++){
                cur[i]=next(cur[i]) ;
                if(cur==target)return level+1 ;

                if(visited.insert(cur).second) q.push(cur) ;

                cur[i]=prev(prev(cur[i])) ;
                if(cur==target) return level+1 ;
                if(visited.insert(cur).second)q.push(cur) ;
                cur[i]=next(cur[i]) ;
            }
        }
    }
   return -1 ;
   }
   
} ;
int main (){
        return 0 ;
}
 