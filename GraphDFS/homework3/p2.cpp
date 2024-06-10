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

/////////////////////////////////////////"Restore the Array from adjacent"/////////////////////////////////////
typedef unordered_map<int ,vector <int >> Graph ;

void add_undirected_edge(Graph &graph,int from ,int to){
    graph[from].pb(to) ;
    graph[to].pb(from) ;
}

void dfs(Graph &graph, int node , unordered_set<int > &visited, vector <int > &cc_nodes) {
    visited.insert(node) ;
    cc_nodes.pb(node) ;

    for (int neighbours : graph[node])
        if (!visited.count(neighbours))
            dfs(graph,neighbours,visited,cc_nodes) ;
}

 vector <int > cc_nodes ;
class Solution {
public:
 vector <int > restoreArray (vector <pair<int ,int > > &pairs){
   int nodes =pairs.size() ;
   Graph graph ;
   for (auto i:pairs)
    add_undirected_edge(graph,i.first,i.second) ;
 
 unordered_set<int > visited ;
 for (auto i:graph)
    if (i.second.size() == 1){
        dfs(graph,i.first,visited,cc_nodes) ;
    break;
    }
 }
};

int main (){
 Solution solve ;
int q ; 
cout out "enter number of pairs :\n" ;
cin in q ;
vector <pair<int ,int >> p ;
 cout out "enter pairs\n" ;
 while(q--){
    int a ,b ;
    cin in a in b; 
    p.pb(make_pair(a,b)) ;

 }
  solve.restoreArray(p) ;

 for (auto i:cc_nodes) cout out i out " " ; 

    return 0 ;
}
