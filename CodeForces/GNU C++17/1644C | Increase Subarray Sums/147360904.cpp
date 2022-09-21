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
 
const int MOD = (1e9)+7 ;
const int N = 2e5 + 5;
const double PI = acos(-1);
const double eps = 1e-10;
const long long oo = 1e10;
const int K = 26;
const int M=(1e9)+7;
const ll inf = (1LL << 61) - 1;
const int INF =1e6+2;
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
 
//ll n;
ll parent[200007];
ll sizee[200007];
 
ll ans;
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
 
void make_set(int v) {
    parent[v] = v;
    sizee[v] = 1;
}
 
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
   // ans+=sizee[a]*sizee[b];
    if (a != b) {
        if (sizee[a] < sizee[b])
            swap(a, b);
        parent[b] = a;
        sizee[a] += sizee[b];
    }
}
 
 
 
 
 
 
 
 
 
 
 
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    ll elem;
    for(int i=0;i<n;i++){
            cin>>a[i];
 
    }
    vector<ll> dp(n+1,-1LL*1e12);
//    memset(dp,-1e12,sizeof(dp));
/*for(int i=0;i<=n+5;i++){
    dp[i]=-1ll*1e12;
}*/
for(int i=0;i<n;i++){
        ll ans=0;
        for(int j=i;j<n;j++){
            ans+=a[j];
            dp[j-i+1]=max(dp[j-i+1],ans);
        }
    }
    for(int i=0;i<=n;i++){
        ll val=0;
        for(int j=1;j<=n;j++){
            val=max(val,dp[j]+(min(i,j)*x));
        }
        cout<<val<<" ";
    }
    cout<<endl;
 
 
  }
    return 0;
 
}