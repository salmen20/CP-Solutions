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
       int n,k;
       cin>>n>>k;
       int a[n];
       for(int i=0;i<n;i++){
        cin>>a[i];
       }
       unordered_map<int,int> prevsum;
       prevsum.clear();
 
       int b[n];
       for(int i=0;i+1<n;i++){
        if(a[i]<2*a[i+1]){
            b[i]=1;
        }
        else{
            b[i]=0;
        }
       }
       int res=0;
      int currsum=0;
       /*
       for(int i=0;i<n;i++){
        currsum+=b[i];
        if(currsum==k){
            res++;
        }
        if(prevsum.find(currsum-k)!=prevsum.end()){
            res+=prevsum[currsum-k];
        }
        prevsum[currsum]++;
       }*/
       for(int i=0;i<k;i++){
        currsum+=b[i];
       }
       if(currsum==k){
        res++;
       }
       for(int i=k;i<n-1;i++){
        currsum+=b[i];
        currsum-=b[i-k];
        if(currsum==k){
            res++;
        }
       }
       cout<<res<<endl;
 
 
 
 
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