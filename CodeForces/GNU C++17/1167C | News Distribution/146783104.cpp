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
const int N = 5e5 + 5;
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
ll a[N];
ll parent[N];
ll sizee[N];
 
ll ans;
ll find_set(ll v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
 
void make_set(ll v) {
    parent[v] = v;
    sizee[v] = 1;
}
 
void union_sets(ll a, ll b) {
    a = find_set(a);
    b = find_set(b);
   // ans+=sizee[a]*sizee[b];
   if (a != b) {
       if (sizee[a] < sizee[b])
           swap(a, b);
        parent[b] = a;
        sizee[a] +=sizee[b];
 
   }
   //sizee[b]=sizee[a];
}
 
 
 
 
 
 
 
 
 
 
 
int main(){
  ll n,m;
  cin>>n>>m;
 
  for(ll i=0;i<n;i++){
    parent[i]=i;
    sizee[i]=1;
  }
 
 // vector<pair<int,int>> v;
   ll x,y;
  while(m--){
        ll k;
        cin>>k;
        vector<ll> v;
        for(ll i=0;i<k;i++){
            cin>>x;
            x--;
                v.push_back(x);
 
        }
        //sort(v.begin(),v.end());
        for(ll i=0;i<k-1;i++){
            union_sets(v[i],v[i+1]);
            //cout<<v[i]<<" "<<v[i+1]<<"herre"<<endl;
        }
 
 
  }
 
  //ll ans=0;
  for(ll i=0;i<n;i++){
       cout<<sizee[find_set(i)]<<" ";
 
 
 
    }
    cout<<endl;
           // cout<<i<<" hereee "<<endl;
return 0;
 
  }
 
 