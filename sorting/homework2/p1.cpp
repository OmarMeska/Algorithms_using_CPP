#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long int
#define tc ll test;cin >> test;while(test--)
#define vi vector<ll>
#define pll pair<ll,ll>
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
#define fo(i,a,b) for(ll i = a; i <= b; i++)
#define nextline out "\n"
#define print(x) for(auto i : x ) cout out i spacef
#define mmax(x,i) x = max(x,i)
#define mmin(x,i) x = min(x,i)
#define N 105
int  freq[101]={0} ;
int find_min (vector <int >&vec)
{
    int minm =  abs (vec [0] -vec [1]) ;
    for (int i=0 ;i <vec.size() ;i++)
    {
        for (int j= i+1 ;j<vec.size() ;j++)
        {
            minm =min(minm ,abs (vec[i]-vec[j])) ;
        }
    }
    return minm ;
}
vector <pair <int ,int> > find_vector (int minm ,vector <int > & vec)
{
    vector <pair <int ,int >> answer ;
    for (int i=0 ;i < vec.size() ;i++)
    {
        for (int j=i+1 ;j < vec.size() ;j++)
        {
            if (abs (vec[i]-vec[j]) == minm)
            {
                answer .push_back ( {min(vec[i],vec[j]) ,max (vec[i],vec[j])}) ;

            }
        }
        
    }
    sort (answer.begin(),answer.end ()) ;
    
    return answer ;
}
void printing  (vector <pair<int ,int >> & answer)
{
    for (auto i:answer) 
    {
        cout<< "[" << i.first << "," << i.second<<"]" << endl;
    }
}
int sol (int a ,vector <int > & vec)
{
   vector <pair <int , int >> answer ;
   
   int minm =find_min(vec);
   answer = find_vector (minm ,vec) ;
   printing  (answer) ;
}
int main ()
{
    int n;
    cin >> n; 
    vector <int > vec (n) ; 
    for (auto &i : vec) cin >> i ;
      assert (n >=2) ; 
      
     sol(n ,vec) ;


return 0;
}