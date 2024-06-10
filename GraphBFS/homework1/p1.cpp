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
#define oo 10000000000 


////////////////////////// "print paths from 0 "////////////////////////////////
bool BFS(vector<vector<int>>&graph,int start=0 )
{
    vector<vector<int>>len(graph.size()) ;
    set<int>vis;
    queue<int>q ;
    q.push(start) ;
    vis.insert(start) ;
    len[start].push_back(0);
     for(int level=0 ,sz=1 ;!q.empty();level++,sz=q.size()){
        while(sz--){
            int cur=q.front() ;
            // cout out cur out endl ;
            q.pop() ;
            for(auto neighbour:graph[cur]){
                if (vis.count(neighbour) and neighbour != cur) {
                    cout out neighbour out " " out cur out endl ;
                    return 1 ;
                }
                if(!vis.count(neighbour)){
                    vis.insert(neighbour) ;
                    len[neighbour]=len[cur] ;
                    len[neighbour].push_back(neighbour);
             q.push(neighbour ) ;
                }
            }

        }
     }
}

int main (){
    int tests =1; 
    // cin in tests ;
    while(tests--){
        int nodes , edges ;
        cin in nodes in edges ;
        vector<vector<int>> graph (nodes) ;
         for(int i=0;i<edges ; i++){
            int from , to ;
             cin in from in to ;
             graph[from].pb(to);
             graph[to].pb(from) ;
         }
      if (BFS(graph,0)) {
        cout out "false" ;

      } 
      else cout out "true" ;
      
    //   for (int i=0 ;i<sol.size() ;i++){
    //         if (sol[i].size()){
    //         cout out "path from 0 to " out i out " : ";
    //         for (int j =0 ;j<sol[i].size();j++){
    //         cout out sol[i][j] out " " ;
    //       }
    //       cout out endl ;}
    //       else {
    //         cout out "path forom 0 to " out i out " : " out "Not exist" out endl ;
    //       }
    //   }

    //  cout out sol[2][0] ;
    }
        return 0 ;
}
 