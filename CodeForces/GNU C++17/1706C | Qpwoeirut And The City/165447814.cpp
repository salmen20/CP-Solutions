#include <bits/stdc++.h>
 
#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long ll;
 
//typedef pair<pair<ll,ll>,ll> coord;
 
using namespace std;
/* ll n;
    cin>>n;
    ll power=1;
    ll res=0;
    while(res<n){
        res+=power;
        power*=3;
    }
 
    power=1;
    while(res-power>=n){
        res-=power;
        power*=3;
    }
    cout<<res<<endl;*/
ll parent[200007];
ll sizee[200007];
const int N=1e6+2;
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
map<int,vector<int>>v ;
 
bool vis[N];
double line=0;
int cycle;
ll an=0;
void dfs(int node,int par ){
    int flag=1;
   /*if(vis[node]){
 
        return;
    }
    vis[node]=1;*/
 
    for(auto adj :v[node]){
            if(adj!=par){
                    flag=0;
 
            dfs(adj,node);
 
            }
 
 
    }
    if(flag==1){
        line++;
        an++;
    }
 
 
 
}
ll a[N];
int n;
 
void solve(){
    int n;
    cin>>n;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    if(n%2==1){
        ll res=0;
        for(int i=2;i<n;i+=2){
            res+=max(0ll,max(a[i+1]-a[i]+1,a[i-1]-a[i]+1));
        }
        cout<<res<<endl;
        return;
 
 
    }
    else{
            //010100 or 010010
        ll res=0;
        for(int i=2;i<n;i+=2){
            res+=max(0ll,max(a[i+1]-a[i]+1,a[i-1]-a[i]+1));
        }
        ll tmp=res;
        for(int i=n-1;i>1;i-=2){
                tmp-=max(0ll,max(a[i]-a[i-1]+1,a[i-2]-a[i-1]+1));
            tmp+=max(0ll,max(a[i+1]-a[i]+1,a[i-1]-a[i]+1));
 
            res=min(res,tmp);
        }
        cout<<res<<endl;
        return;
 
 
    }
 
 
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //freopen("icecream.in","r",stdin);
 
    int t=1;
    cin>>t;
    while(t--){
            solve();
 
    }
    return 0;
}