#include <bits/stdc++.h>
 
#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
typedef long long ll;
 
const ll INF = 4e9+5;
 
const int N =3*1e5+7;
const int MOD = 1e9+7  ;
using namespace std;
ll pi=3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679;
vector<pair<ll,ll>> adj[N];
 bool verif[N];
 
void solve(){
    ll n,q;
    cin>>n>>q;
 
    ll a[n+1];
    for(int i=0;i<n+1;i++){
        a[i]=(1<<30)-1;
    }
    memset(verif,false,sizeof(verif));
   /* for (ll i=1;i<=n;i++){
        for (ll k=0;k<=30;k++)
        cout<<a[i][k]<<" ";
        cout<<endl;
    }*/
    while (q--){
        ll x,y,z;
        cin>>x>>y>>z;
        adj[x].pb(make_pair(y,z));
        verif[x]=true;
        verif[y]=true;
        adj[y].pb(make_pair(x,z));
    }
 
 
   for(ll k=29;k>=0;k--){
        for (ll i=1;i<=n;i++){
            if((a[i]>>k)&1){
            for (ll j=0;j<adj[i].size();j++){
                    if(((adj[i][j].second>>k)&1)==0 ){
                        a[i]-=1<<k;
                        break;
                    }
 
                }
 
            }
    }
 
        for(ll i=1;i<=n;i++){
            if((a[i]>>k)&1==1){
                a[i]-=1<<k;
                for(ll j=0;j<adj[i].size();j++){
                    if((adj[i][j].second>>k)&1==1 && ((a[adj[i][j].first]>>k)&1)==0){
                        a[i]+=1<<k;
                        break;
                    }
                }
            }
 
        }
 
 
   }
   /* for (ll i=1;i<=n;i++){
        for (ll k=0;k<=30;k++)
        cout<<a[i][k]<<" ";
        cout<<endl;
    }*/
    for (ll i=1;i<=n;i++){
       /* ll h=0;
        for(int k=0;k<=29;k++){
            if(a[i][k]){
                h+=1<<k;
            }
        }
        cout<<h<<" ";*/
        cout<<a[i]<<" ";
    }
cout<<endl;
}
 
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
  //  freopen("ghanophobia.in","r",stdin);
    int t=1;
   // cin>>t;
    while(t--){
            solve();
    }
return 0;
}