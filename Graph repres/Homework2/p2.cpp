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
class ObjectIdMapper {

private : 

map < string ,int > str_to_id ;
map <int ,string > id_to_str; 

public : 

int getId (string &str){
    if (str_to_id.count(str)){
        return str_to_id[str] ;
    }
    int id = str_to_id.size(); 
    str_to_id[str]=id ;
    id_to_str [id]=str;

 return str_to_id [str] ;
}

string getStr(int id){
    return id_to_str[id] ;
}

};

struct edge {

    int to ; 
    int cost ;

};

typedef vector <vector <edge>> GRaph ; // can replace edge with pait < int,int > 

void add(GRaph &graph ,int from , int to ,int cost ){
    graph [from ].push_back ({to ,cost}) ;
}

void add_undirected_edge ( GRaph &graph ,int from ,int to , int cost){
    graph [from ].push_back ({to ,cost}) ;
    graph [to].push_back ({from ,cost}) ;
}

void printing (GRaph &graph , ObjectIdMapper &mapper){ // can remove mapper and put it in Global and remove it from main func 
    int nodes = graph.size(); 

    for (int from =0;from <nodes ;from ++){
        cout out "From " out mapper.getStr(from) out " has neighbors : " out endl ;
        for (int edge =0 ; edge <(int )graph [from].size() ; edge++){

            cout out "\tTo " out mapper.getStr( graph[from][edge].to )
            out " cost " out graph [from][edge].cost out endl ;

        }
    }

}
int main() {
int nodes , edges ;
cin in nodes in edges ;

GRaph graph (nodes); 
ObjectIdMapper mapper ;

for (int i=0 ;i<edges ;i++){
    string from , to ; 
    int cost ;
    cin in from in to in cost ;
    int from_idx = mapper.getId(from);
    int to_idx = mapper.getId(to) ;
    add(graph, from_idx,to_idx ,cost) ;
}

printing(graph, mapper); 

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