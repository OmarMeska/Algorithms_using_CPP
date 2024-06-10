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
/*
Paths of length 2 
*/
typedef  vector < vector  < int >> GRaph ;


bool valid (int n,int r , int rows,int  cols ){
    if (n<0 || n >= rows|| r<0 || r >= cols)
    return false; 
    return true;
}

void add (GRaph &graph , int from ,int to){
    graph [from] .pb(to) ; 
}

void print_graph (GRaph &graph ){
    for (int i=0 ;i<graph.size() ;i++){
       cout out "from node " out i out " to : " ;
        for (auto i:graph [i]){
            cout  out i out " " 
        ;
        }
        cout out endl ;
    }
}

void print_chain (GRaph &graph , int from ){
    cout out from out " "; 
    if (graph [from].size() >0)
    print_chain (graph ,graph[from][0]);
}
void print_paths_len2 (GRaph &graph){
    int n = graph .size() ;
    // Iterate on nodes and get all its neighbor
    // for each neighbor , get its neighbors too 

    for (int i=0 ;i<n ;i++){
        for (int j =0 ;j<graph[i].size() ;j++){
            for (int k =0 ;k<(int) graph [graph[i][j]].size() ;k++){
                cout out i out " " out graph [i][j] out " "out graph [graph[i][j]][k] out endl ;
            }
        }
    }
}
void check_solution (GRaph &graph){
    int nodes= graph.size() ; 
    for (int i=0 ;i<nodes ;i++){
        if (graph[i].size()==0){
            if (freq[i]== nodes-1)
             {
                 cout out i ; 
                 return ;
             }
             else {
                cout out -1 ;
                 return ; 
             }
        }
    }
    cout out -1 ;
     return ;
     
}
int main() {
    int t ;
     cin in t ;
     while (t--){
   int nodes , edges ; 
   cin in nodes in edges ;
   GRaph graph (nodes ); 
   for (int i=0 ;i<edges ;i++){
    int from , to ;
    cin in from in to ;
    freq[to]++ ;
    add(graph , from , to ); 
   }
   cout out endl ;
 check_solution (graph) ; 
     cout out endl ;
     }
 return 0; }
/*
8
6 5
0 3
1 3
2 3
4 3
5 3

6 9
0 3
1 3
2 3
4 3
3 5
0 5
1 5
2 5
4 5

1 0

3 0

1 1
0 0

3 3
0 0
1 1
2 2

5 4
0 1
1 2
2 3
3 4

5 8
0 1
1 2
2 3
4 3
3 2
4 3
0 1
4 3
*/