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


////////////////////////// "Jump Game||| "////////////////////////////////

bool valid(vector<int>&arr,int pos){
       return(pos>=0 and pos<arr.size()) ;
}

bool bfs(vector<int>&arr, int start){
    queue<int> q;
    q.push(start) ;
    vector<int> len (arr.size(),-1) ;
    for(int sz=1 ;!q.empty();sz=q.size()){
        while(sz--){
            int cur =q.front();
    len[cur]=1 ;
            q.pop() ;
             int right= cur+arr[cur] ;
             int left = cur-arr[cur] ;
             if (arr[cur]==0) return true; 
             if(valid(arr, right) and len[right]==-1 ){
                  q.push(right) ;
                  len[right] =1 ;
                  if (arr[right]==0) return true ;
             }
             if (valid(arr,left) and len [left]==-1) {
                q.push(left) ;
                len[left]=1;
                if (arr[left]==0) return true; 
             }
        }

    }
    return false;
}
////////////////////////another implementation/

class Solution {
 bool process(queue<int>&q,vector<bool>&visited, vector<int>&arr,int idx){
    if (idx<0  or idx>=(int) visited.size() or visited[idx] ) return false;
    if (arr[idx]==0) return true ;
    visited[idx]=true ;
    q.push(idx);
    return false;
 }
 public:
  bool canReach(vector<int>&arr,int start){
    if (arr[start]==0)return true; 
     
    vector<bool > visited(arr.size()) ;
   queue<int>q ;
   q.push(start) ;
   visited[start]=1 ;
    
   for (int level =0 ,sz=1 ;!q.empty() ;level++ ,sz=q.size()){
   while(sz--){
    int idx=q.front() ;
    q.pop() ;
    if (process(q,visited,arr,idx+arr[idx])
    || process(q,visited,arr,idx-arr[idx])) return true; 
   }
   }
  return false;
}

};


int main (){

        return 0 ;
}