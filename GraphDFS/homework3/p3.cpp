
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

typedef unordered_map<int ,vector <int >> Graph ; 
void addGraph (Graph &graph, int from ,int to){
    graph[from].pb(to) ;
    graph[to].pb(from) ;
}

int dfs(Graph &graph,int node ,unordered_set<int > &visited){
    visited.insert(node) ;
    for (int neighbour:graph[node])
        if (!visited.count(neighbour)) 
            return 1+dfs(graph,neighbour,visited) ; 
      return 1 ;
}

class Solution{
    public :
     int longetsvalue(vector <int >arr) {
       
       unordered_set <int > nums (arr.begin(),arr.end()) ; 
       if (nums.size()==0) return 0 ;

       Graph graph ;
       for (auto val:nums ){
        if (nums.count(val+1) )addGraph(graph,val ,val+1) ;
       }

       int mx_cc_size =1 ;

       unordered_set <int > visited ;
       for (auto node :graph){
        if(!visited.count(node.first) and node.second.size()==1){
            int cc_size =dfs(graph,node.first,visited) ; 
            //  cout out cc_size out endl ;
            mx_cc_size=max(mx_cc_size,cc_size) ;
        }
       }
       return mx_cc_size ;

     }
} ;
int main (){

int si ;
cin in si ;
  vector <int >arr(si) ;
  for(auto &i:arr) cin in i;
    
    Solution solve ; 
    cout out solve.longetsvalue(arr) ;

    
    return 0 ;
}
