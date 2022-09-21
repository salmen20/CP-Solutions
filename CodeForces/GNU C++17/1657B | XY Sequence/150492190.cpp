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
ll solve(ll a, ll b, ll m) {
    a %= m, b %= m;
    ll k = 1, add = 0, g;
    while ((g = __gcd(a, m)) > 1) {
        if (b == k)
            return add;
        if (b % g)
            return -1;
        b /= g, m /= g, ++add;
        k = (k * 1ll * a / g) % m;
    }
 
    ll n = sqrt(m) + 1;
    ll an = 1;
    for (int i = 0; i < n; ++i)
        an = (an * 1ll * a) % m;
 
    unordered_map<ll, ll> vals;
    for (int q = 0, cur = b; q <= n; ++q) {
        vals[cur] = q;
        cur = (cur * 1ll * a) % m;
    }
 
    for (int p = 1, cur = k; p <= n; ++p) {
        cur = (cur * 1ll * an) % m;
        if (vals.count(cur)) {
            ll ans = n * p - vals[cur] + add;
            return ans;
        }
    }
    return -1;
}
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
  //std::cout << std::fixed;
 //std::cout << std::setprecision(8);
 int t;
 cin>>t;
 while(t--){
    ll n,b,x,y;
    cin>>n>>b>>x>>y;
    ll a[n+1]={0};
    //somme of ai should be equal to b
    ll j=1;
    ll som=0;
 
 
    a[0]=0;
    for(int i=1;i<n;i++){
        if(a[i-1]+x<=b){
            a[i]=a[i-1]+x;
            som+=a[i];
        }
        else {
            a[i]=a[i-1]-y;
            som+=a[i];
        }
    }
    if(a[n-1]+x<=b){
        som+=a[n-1]+x;
    }
    else{
        som+=a[n-1]-y;
    }
  /*  for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }*/
    cout<<som<<endl;
 
 
 
 
 
 }
 
return 0;
}