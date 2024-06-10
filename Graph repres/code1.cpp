#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector < vector<int >> Graph;
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL);
#define ll long long int
#define llu unsigned long long int 
#define tc     \
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
#define space << " " <<
#define spacef << " "
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x)   \
  for (auto i : x) \
  cout out i spacef
#define mmax(x, i) x = max(x, i)
#define mmin(x, i) x = min(x, i)
#define N 105
int freq[1000000] = {0};
ll mod = 100000000000000000 + 2;
ll fastpower(ll a, ll b){ll ans = 1;while (b){if (b % 2){ans = ans * a;}a = a * a;b /= 2;}return ans;}
void add_directed_edge (Graph &graph ,int from ,int to){
    graph[from] [to] +=1 ; 
}
void add_undirected_edge (Graph &graph , int from ,int to){
    graph[from] [to] += 1 ;
    graph[to][from]+= 1 ;
}
void print_adjaceny_matrix (Graph &graph )
{
  int nodes = graph.size() ; 
  for (int from =0 ;from<nodes;from++){
    for (int to =0 ;to<nodes ; to++){
        if (graph[from][to]>0){
            cout << "From "<< from out "to " out to 
            out " there are  " out graph [from][to] out "edges\n" ;

        }
    }
  }
}
int main() {
int nodes , edges ;
 cin in nodes in edges ;
  Graph graph(nodes, vector <int> (nodes));
  for (int i=0 ;i<edges ; i++){
    int from ,to ;
     cin in from in to ;
     add_directed_edge(graph,from ,to) ;
  }
  print_adjaceny_matrix(graph) ;
return 0; 
 } 