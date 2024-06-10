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

//////////////////////////////////////"Reorder Routes to make all paths lead to the city zero"//////////////////////////////////////
typedef vector <vector<pair<int,int>>> Graph; 

void add_undirected_Graph(int from ,int to,Graph& graph){
    graph[from].pb(make_pair(to,1)) ;
    graph[to].pb(make_pair(from,0)) ;
}

int cnt =0 ;
void dfs(Graph graph ,vector <bool>vis ,int node){
    vis[node]=true;
    for (auto edg:graph[node]){
        if(!vis[edg.first]){
        cnt+=edg.second ;
        dfs(graph,vis,edg.first) ;
        }
    }
}

int main (){
     int node ,edge ;
     cout out "enter number of nodes and number of edges" ;
      cin in node in edge ;
      vector <bool> vis(node,0) ;
      Graph graph (node);
           cout out "enter the Graph\n" ;
            for (int i =0;i<edge ;i++){
                int from ,to  ;
                cin in from in to ;

                add_undirected_Graph(from,to,graph) ;         
          // cout out graph[from][0].first out endl ;
            }
            for(int i =0 ;i<graph.size();i++){
                for(int j=0 ;j<graph[i].size();j++){
                    cout out i  out " " out graph [i][j].first out " " out graph[i][j].second out endl ;
                }
            }
           dfs (graph ,vis,0) ;
        cout out cnt out endl ;
        return 0 ;
}
/*
6 5 
0 1 
1 3 
2 3 
4 0 
4 5 
*/
