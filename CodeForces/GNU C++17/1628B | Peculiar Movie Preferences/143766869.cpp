#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl ;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
#define sz(x) ((int)(x).size())
#define max(a,b) (a>b ? a : b)
#define min(a,b) (a<b ? a : b)
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define endl '\n'
 
const int MOD = (1e9)+7 ;
const int N = 2e5 + 5;
const double PI = acos(-1);
const double eps = 1e-10;
const long long oo = 1e10;
const int K = 26;
const int M=(1e9)+7;
const ll inf = (1LL << 61) - 1;
const int INF =1e19;
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
void solve(int n){
        map<string,bool> m;
        string s;
        string rev;
        for (int i=0;i<n;i++){
            cin>>s;
            if(s.size()==1){
                yes();
                return ;
            }
            if(s.size()==2){
                reverse(s.begin(),s.end());
                if(m[s]==true){
                    yes();
                    return ;
                }
            }
            if(s.size()==3){
                string tmp="";
                reverse(s.begin(),s.end());
                tmp+=s[0];
                tmp+=s[1];
                if(m[tmp]==true){
                    yes();
                    return ;
                }
            }
            m[s]=true;
 
        }
        no();
        return;
 
 
}
 
 
 
 
 
 
 
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--){
            cin>>n;
            map<string,bool> m;
         string s;
         bool ok=false;
        string rev;
 
        for (int i=0;i<n;i++){
            cin>>s;
            m[s]=true;
            reverse(s.begin(),s.end());
            if(s.size()==1){
                    ok=true;
 
 
 
            }
 
           else if(s.size()==2){
 
                if(m[s]==true){
                        ok=true;
 
 
 
                }
                string tmp="";
                tmp+=s[0];
                tmp+=s[1];
                for(char i='a';i<='z';i++){
                        string r="";
                        r=r+s+i;
 
                    if(m[r]==true){
                        ok=true;
                        break;
                    }
                }
                if(s[0]==s[1] && s[1]==s[2]){
                    ok=true;
                }
            }
          else  if(s.size()==3){
                string tmp="";
                if(m[s]==true){
                    ok=true;
                }
                tmp+=s[0];
                tmp+=s[1];
                if(m[tmp]==true){
                        ok=true;
 
 
                }
                if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3]){
                    ok=true;
                }
            }
 
 
        }
        if(ok){
            yes();
        }
        else {
            no();
        }
          m.clear();
    }
}