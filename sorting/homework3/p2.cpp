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
///////////////////// "most profit assigning work " /////////////////////////////
int main ()
{
    int n, m ;
    cin >> n >>  m; 
    vector <int > workers (m) ; 
    vector <pair <int ,int > > vecp (n) ; 
    for (int i=0 ;i < n; i++)
    {
        cin >> vecp[i].first >> vecp[i].second ;
    }
    sort (vecp.begin(), vecp.end()) ;
    ll sum =0 ; 
    for (int i=0  ;i < m  ;i++)
    {
        int a  ;
        cin >> a ;
        int mx =vecp[0].second ;
        for (int j =0 ; j <n ;j ++)
        {
            if (vecp[j].first <= a )
            mx =max (mx,vecp[j].second);
        } 
        sum += mx ; 
    }
    cout << sum ; 
////////////////// second solution ////////////
/*
int n, m ;
    cin >> n >>  m; 
    vector <int > workers (m) ; 
    vector <pair <int ,int > > vecp (n) ; 
    for (int i=0 ;i < n; i++)
    {
        cin >> vecp[i].first >> vecp[i].second ;
    }
    sort (vecp.begin(), vecp.end()) ;
    sort (workers.begin (), workers.end ()) ; 
    int j =0 , mxprofit =0 , total_profit =0 ; 
    for (int i=0 ;i < m ; i++)
    {
        for (  ; j < n and workers[i]>= vecp[j].first ; j++)
        {
            mxprofit =max (mxprofit,vecp[j].second) ;

        }
        total_profit +=mxprofit ;
    }
    cout << total_profit << endl ; 
    
    */

return 0;
}

