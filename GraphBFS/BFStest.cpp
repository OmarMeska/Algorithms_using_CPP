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









/////////////////////////////////"BFSV1"/////////////////////////////////
vector<int>BFS_v1(vector<vector<int>>&graph,int start){
    vector<int>len(graph.size(),oo) ;
    queue<pair<int,int>>q ;
    q.push({start,0}); 
    len[start] =0 ;
    while(!q.empty()){
        pair<int,int>p=q.front() ;
        q.pop() ;
        
        int cur=p.first ,level =p.second ;

        for(int neighbour:graph[cur]){
            if(len[neighbour]==oo){
                q.push({neighbour,level+1}) ;
                len[neighbour]=level+1 ;
            }
        }
    }
    return len ;
}


////////////////////////////////////////////"BFSv2"///////////////////////////////////////////////
vector<int>BFS_v2(vector<vector<int>>&graph,int start){
    vector<int>len(graph.size(),oo) ;
    queue<int>q ;
    q.push(start) ;
    len[start] =0 ;
     
     for(int level=0 , sz=1 ;!q.empty();++level,sz=q.size()){
        while(sz--){
            int cur=q.front() ;
            q.pop() ;
            for(int neighbour:graph[cur]){
                if(neighbour==oo){
                    q.push(neighbour) ;
                     len[neighbour]=level +1;                }
            }
        }
     }
 return len ;
 }


int main (){
        return 0 ;
}
