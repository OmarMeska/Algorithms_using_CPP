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
    /////////////////////////////////"is there a cycle in o(v)"/////////////////////////////
typedef vector<vector<int>>Graph;
void add_undirected_graph(Graph&graph,int from,int to){
    graph [from].pb(to);
    graph [to].pb(from);
}

bool dfs(Graph &graph ,int node,vector<bool>&visited,int parent=-1){
    visited[node]=true ;
    for(auto neighbour:graph[node]){
        if(neighbour==parent)continue;

        if(visited[neighbour])
        return true ; // is a cycle 

        if(dfs(graph,neighbour,visited,node))
        return true ;
    }
    return false ;
}

int main (){
 
             return 0 ;
}
