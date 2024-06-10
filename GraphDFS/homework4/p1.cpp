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
    ///////////////////////"isbipartite"////////////////////
typedef vector<vector<int>>Graph;
class Solutoin{
    private:
    bool is_color_confilc{false};
    
    void dfs(Graph & graph,int node,vector<int>&colors,int assign_color=1){
        if(colors[node]==0) colors[node]=assign_color ;
        else{
            if(colors[node]!=assign_color)is_color_confilc=true;
            return ;
        }
        
        for(int neighbours:graph[node]){
            dfs(graph,neighbours,colors,3-assign_color);
        }
    }

   public:
   bool isBipartite(Graph &graph){
    int nodes =graph.size() ;
    vector<int>colors(nodes);
    for(int i=0;i<nodes;i++){
        if(colors[i]==0){
            dfs(graph,i,colors);
            if(is_color_confilc)return false;
        }
    }
    return true ;
   }
    };
int main (){
   

        return 0 ;
}
