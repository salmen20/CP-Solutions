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
       int n;
       cin>>n;
       ll a[n];
 
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       ll c[n];
       c[0]=a[0];
       ll pos=-1;
       bool ok=false;
       bool testt=true;
        if(c[0]==0){
            ok=true;
            pos=0;
 
        }
       for(int i=1;i<n;i++){
            c[i]=a[i]+c[i-1];
            if(c[i]==0 && ok==false){
                ok=true;
                pos=i;
            }
            if(i!=n-1 && c[i]<0){
                testt=false;
            }
       }
      /* for(int i=0;i<n;i++){
        cout<<c[i]<<endl;
       }*/
       bool test=false;
       if(pos!=-1){
            for(int i=pos+1;i<n;i++){
                if(a[i]!=0){
                    test=true;
                    break;
                }
            }
 
       }
       if(test==true || testt==false || c[n-1]!=0 || c[0]<0){
        cout<<"No"<<endl;
       }
       else{
        cout<<"YES"<<endl;
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