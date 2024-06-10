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

typedef unordered_map<int ,vector <int > > Graph ;
typedef unordered_set<int>Set ;

void addGraph (Graph &graph , int from ,int to){
    graph[from].pb(to) ;
    graph[to].pb(from) ;
}

void dfs (Graph &graph,Set &visited ,int node , vector <int > &cc_nodes){
    visited.insert(node) ;
    cc_nodes.pb(node) ;
     for(auto i:graph[node])
        if (!visited.count(i))
            dfs(graph,visited,i,cc_nodes) ;
        
}

class Solution {
public:
 string smallestString(string str,vector <pair<int ,int >>& pairs){
    Graph graph(str.size());
    for (auto i:pairs)
        addGraph(graph,i.first,i.second) ;
 
    Set visited ;
    for (auto i:graph){
        if (!visited.count(i.first)){
            cout out i.first out " " ;
            cout out i.second[0] out endl ;
            vector <int > cc_nodes ;
            dfs(graph,visited,i.first,cc_nodes) ;
            
            string t; 
            for (auto j:cc_nodes)t+=str[j] ;
             
             sort (cc_nodes.begin(),cc_nodes.end()) ;
             sort(t.begin(),t.end()) ;
            cout out cc_nodes.size( );
              cout out endl ;
            for (int j=0 ;j<cc_nodes.size() ;j++){
                 cout out "c[j] " out cc_nodes[j] out "  t[j] : " out t[j] out endl ;
                str[cc_nodes[j]]=t[j] ;
            }
        }
    }
  return str; 
 }
};

int main (){
   string s ;
    cin in s ;
    vector <pair<int , int>> vp ;
    int q ;
    cin  in q ;
    while (q--){
        int a ,b ;
         cin in a in b ;
         vp.pb(make_pair(a,b)) ; 
    }

    Solution solve ;
    cout out solve.smallestString(s,vp) ;
        return 0 ;
}
