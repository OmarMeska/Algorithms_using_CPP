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

typedef unordered_map<int ,vector <int >> GRAph ; 

 void add_directed_edge (GRAph &graph , int from , int to ){
     graph[from ].pb (to) ;

 }
 ////////////////////////////// "Kill process" /////////////////////////////
 
//   void build_graph (GRAph &graph ,vector <int >&pid ,vector <int > &ppid){
//     for (int i=0 ;i<pid.size();i++){
//         add_directed_edge(graph,ppid[i],pid[i]) ;

//     }
//   }


  void dfs (GRAph &graph , int node ,unordered_set <int >&visited){
    visited.insert(node) ;
   for (int neighbour :graph[node]){
    if (!visited.count(neighbour))
    dfs(graph,neighbour,visited) ;
   }
  }

int main () {
  GRAph graph ;
    cout out "enter the graph" ;
     int n;  // number of edges ;
     cin in n ;
      for (int a =0 ; a <n; a++){
         int from , to ; 
         cin  in from  in to ; 
          add_directed_edge(graph, from ,to) ;
      }
       cout out "enter the node you want " ; 
        
         int t ;
          cin in t ;
            unordered_set <int > se  ;
             dfs (graph , t ,se) ; 
               for (auto i :se) cout out i   space  ; 
             
             

     return 0 ;     
}



