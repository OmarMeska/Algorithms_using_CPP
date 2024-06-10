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
ll fastpower(ll a, ll b)
{
    ll ans = 1;
    while (b)
    {
        if (b % 2)
        {
            ans = ans * a;
        }
        a = a * a;
        b /= 2;
    }
    return ans;
}
//////////////////////////////////////"number of connected components in undirected Graph"/////////////////////////////////////////
typedef vector < vector <int >> GRAph ; 
void add_undirected_edge (GRAph &graph ,int from  ,int to ){
   graph [from ].pb(to) ; 
   graph [to].pb(from) ;
}

void dfs (GRAph &graph , int node ,vector <bool> &visited){
  visited[node]=1 ;
  for (int neighbour :graph[node]) { 
    if (!visited[neighbour]){
      dfs(graph,neighbour,visited) ;

    }
  }
}

int count_components(GRAph &graph){
  int nodes =graph.size() ;
   vector <bool > visited (nodes) ; 
   int counter =0 ;
    for (int i =0 ;i<nodes ; i++){
       
       if (!visited[i]){
        counter++ ; 
        dfs(graph,i,visited) ;

       }  
    }
    return counter ;


}
int main () {
  cout out "Enter number of nodes\n" ; 
  
   int n; cin in n ;GRAph graph (n);
   int nn ; cin in nn ; 
   for (int i=0 ;i< nn;i++)
             {
               int a ,b ;
               cin in a in b ;
                add_undirected_edge(graph , a ,b) ; 
             }
             int x = count_components(graph) ; 
 cout out x  out endl ;
     return 0 ;     
}



