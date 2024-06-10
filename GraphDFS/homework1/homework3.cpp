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

#define N 105

//////////////////////////////"Employee problem"///////////////////////////////

class Employee{
public:
int id ; 
int importance ;
vector <int >subordinates ;
} ;

class Solution {
    private : unordered_map<int ,Employee*>id_to_emp ;
    public :
    int getImportance (vector <Employee*> employees ,int id){
        for (auto &emp:employees) {
            id_to_emp[emp->id]=emp ;
        }
        return dfs(id) ;
    }
    int dfs (int id){
        Employee *emp =id_to_emp[id ] ;

        int result =emp->importance ;
        for (auto &subEmp :emp->subordinates){
            result+= dfs(subEmp) ;

        }
        return result ;
    }
};

int main () {
     return 0 ;     
}



