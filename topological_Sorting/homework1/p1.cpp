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

vector<int> topsort(vector<vector<int>>&graph){
    int sz =graph.size() ;
    vector<int> indegree(sz,0) ;
    for (int i=0 ;i<sz;i++)
        for (int j:graph[i])
            indegree[j]++;
            priority_queue<int ,vector<int>,greater<int>>ready ;
      for (int i =0 ;i<sz;i++)
        if(!indegree[i])ready.push(i) ;
      
      vector<int> ordering;
      while(!ready.empty()){
        int i = ready.top( ) ;
        ready.pop() ;
        ordering.push_back  (i) ;
        for (int j:graph[i])
        if(--indegree[j]==0) ready.push(j) ;

      }
      if(ordering.size()!=graph.size()) ordering.clear () ;//there is a cycle 
      return ordering; 
}
int main () {
     return 0 ;     
}



