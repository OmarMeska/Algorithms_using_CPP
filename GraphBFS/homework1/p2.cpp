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
#define oo 100000


//////////////////////////////////"Valid tree"///////////////////////////////

bool Bfs (vector<vector<int>>&graph,vector<int>&parent,int start,vector<int>&len){
    queue<int>q ;
    q.push(start) ; 
    len[start]=0 ;
    for (int level=0 , sz=1 ; !q.empty() ;level++ , sz=q.size()){
        while(sz--){
            int cur =q.front() ;
            q.pop() ;
            for (auto neighbour:graph[cur]){
                if(neighbour==parent[cur]) continue ;
                if(len[neighbour]==oo){
                    q.push(neighbour) ;
                    len[neighbour]=level+1 ;
                    parent[neighbour]=cur;
                }
                else return false ;
            }
        }
    }
    return true ;
}

bool has_cycle(vector<vector<int>> &graph){
      vector<int>len(graph.size(),oo) ;
      vector<int>parent(graph.size(),-1);
      for(int i=0 ;i<graph.size() ;i++)  if (len[i]==oo and !Bfs( graph,parent,i,len))return false;
      return true ;
}


int main (){
    int n ,e;
    cin in n in e;
    vector<vector<int>> Graph (n) ;
     for (int i=0 ;i<e; i++){
        int from , to ;
        cin in from in to;
        Graph[from] .pb(to) ;
        Graph[to].pb(from) ;

     }
     if(!has_cycle(Graph)  ){
        cout out "this is not valid" ;
     }
     else cout out "this is valid" ;

        return 0 ;
}
/*
5 5 
0 1
1 2 
2 3 
1 3 
1 4 
// not  valid 

5 4
0 1 
0 2 
0 3 
1 4 
// valid 
*/
