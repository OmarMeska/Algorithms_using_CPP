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
int letters =26 ;
vector  <string > count_sort_first_char (vector <string > &strings )
{
       vector <vector <string >> letters_to_string (letters) ;
       for (int i=0 ;i<strings.size() ;i++ )
       {
                letters_to_string [strings[i][0]-'a'] .push_back(strings[i]) ;
       }
       vector < string > final_strings ;
        for (int i=0 ;i<letters ; i++)
       {
           for (int j =0 ;j <letters_to_string[i].size() ; j++)
           {
               final_strings.push_back(letters_to_string[i][j]) ;
           }
       }
return final_strings ; 
      
}
int main ()
{ 
vector <string  > strings  = { "ziad" ,"belal" ,"adamv","baheir", "ali","alim" , "adams" ,"kokoo"} ; 
vector <string > final_strings = count_sort_first_char (strings)  ;
for (auto i:final_strings) cout<< i<< " " ; 

return 0;
}