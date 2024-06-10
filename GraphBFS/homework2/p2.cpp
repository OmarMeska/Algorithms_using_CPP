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


////////////////////////// " Minimum Operations to conver number||| "////////////////////////////////

bool valid(int x){
    return(x>=0 and x<=1000);
}
int bfs(vector<int>&graph,int start, int end){
    vector<bool>visited(1001) ;
    queue<int>q ;
    q.push(start) ;
    visited[start]=1 ;

    for (int level =0 ,sz=1 ;!q.empty() ; level++ ,sz=q.size()){
        while(sz--){
            int x =q.front( ) ;
            q.pop() ;
            for (int i=0 ;i<(int)graph.size();i++){
                    if((x+graph[i])==end || (x-graph[i])==end || (x^graph[i])==end) return level+1 ;
                
                if(valid(x+graph[i]) and visited[x+graph[i]]==0){
                    
                        q.push(x+graph[i])  ;
                        visited[x+graph[i]]=1 ;
                    
                }
                
                
                if(valid(x-graph[i]) and visited[x-graph[i]]==0){
                    
                        q.push(x-graph[i])  ;
                        visited[x-graph[i]]=1 ;
                    
                }
                
                
                if(valid(x^graph[i]) and visited[x^graph[i]]==0){
                    
                        q.push(x^graph[i])  ;
                        visited[x^graph[i]]=1 ;
                }
                
            }
        }
    }
    return -1 ;
}

int main (){
   int n ;
   cin in n; 
   vector<int> numbers ;
   for (int i=0 ;i< n;i++){
    int a ;
    cin in a ;
    numbers.pb(a) ;
   }
    int start ,end ;
    cin in start in end ;

 cout out bfs(numbers ,start,end)   out endl ;
      
        return 0 ;
}
 