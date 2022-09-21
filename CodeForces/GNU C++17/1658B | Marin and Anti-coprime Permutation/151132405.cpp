#include <bits/stdc++.h>
#include <stack>
 
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
 
const int MOD = 998244353 ;
//const int N = 2e5 + 5;
const double PI = acos(-1);
const double eps = 1e-10;
const long long oo = 1e10;
const int K = 26;
const int M=(1e9)+7;
const ll inf = (1LL << 61) - 1;
const int INF =1e9+2;
//#define p 101
 
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
bool palindrom(string s){
    string tmp=s;
    reverse(s.begin(),s.end());
    if(s==tmp){
        return true;
 
    }
    else {
        return false;
    }
 
 
 
}
const int L=1e3+1;
ll fact[L];
 
 
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        fact[0]=1;
        for(int i=1;i<1e3+1;i++){
            fact[i]=(fact[i-1]*i)%MOD;
        }
       //cout<<fact[3]<<endl;
        int t;
        cin>>t;
        while(t--){
                int n;
                cin>>n;
                if(n%2==1){
                    cout<<0<<endl;
                }
                else {
                    ll res=0;
                    res=fact[n/2]*fact[n/2]%MOD;
 
                    cout<<res<<endl;
                }
 
 
        }
return 0;
}