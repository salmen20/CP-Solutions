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
 
 
 
 
 
 
void solve(){
       ll n,k;
       cin>>n>>k;
       ll a[n];
       ll prefix[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
 
       prefix[0]=a[0];
       for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+a[i];
       }
      ll res=0;
      if(n<=k){
            res=prefix[n-1]+(k-1+k-n)*n/2;
            cout<<res<<endl;
 
 
      }
      else{
            //cout<<"prefix [k-1 ="<<prefix[k-1]<<endl;
        res=prefix[k-1];
        for(int i=k;i<n;i++){
            res=max(res,prefix[i]-prefix[i-k]);
 
        }
        res+=((k)*(k-1)/2);
        cout<<res<<endl;
      }
 
 
 
}
 
 
 
 
int main()
{
  //freopen("game.in","r",stdin);
     std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
 int t;
 cin>>t;
 while(t--){
        solve();
 
 
 
 
 
 
 
 
 }
 
 
 
 
 
 
 
 
 
 
    return 0;
 
}