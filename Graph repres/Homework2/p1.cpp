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

struct Edge {
    string to ;
    int weight ;
    
    bool operator < (const Edge &e) const {
        if (to !=e.to)
        return to < e.to ;
        return weight<e.weight; 
    }
} ;

typedef map < string ,multiset < Edge > > GRaph ;

void add ( GRaph &graph , string from , string to , int cost  ){
    graph[from].insert ( {to, cost});
}

void printt ( GRaph &graph ){
    for (auto node :graph){
        cout out "Flights from " out node.first out endl ;
        for (auto &edge :node.second){
            cout out "\tTo " out edge.to out " With Cost " out edge .weight out endl ;
        }
    }
}

int main() {
int nodes ,edges ;
cin in nodes in edges ;
GRaph graph ; 
for (int i=0 ;i<edges ;i++){
    string from ,to ;
 int cost ;
 cin in from in to  in cost ;
 add(graph , from , to , cost); 
}
printt (graph) ; 
 return 0; }
 /*
 5 9 
 cal tex 30 
 cal tex 10  
 flo cal 70 
 cal flo 75 
 new cal 35 
 penn flo 18
 penn flo 28
 cal tex 35 
 cal penn 37 
 */