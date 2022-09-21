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
const int INF =2* 100001;
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
int main(){
 
 int t;
 cin>>t;
 while(t--){
  int n;
  cin>>n;
  vector<pair<ll,ll>> v(n);
  for(int i=0;i<n;i++){
   cin>>v[i].first;
   v[i].second=i;
  }
  string s;
  cin>>s;
  sort(v.begin(),v.end());
  ll ans=n;
  for(ll i=n-1;i>=0;i--){
   if(s[v[i].second]=='1'){
    v[i].first=ans;
    ans--;
   }
  }
  for(int i=n-1;i>=0;i--){
   if(s[v[i].second]=='0'){
    v[i].first=ans;
    ans--;
   }
  }
  for(int i=n-1;i>=0;i--){
   ll tmp;
 
   tmp=v[i].second;
   v[i].second=v[i].first;
   v[i].first=tmp;
 
  }
  sort(v.begin(),v.end());
  for(int i=0;i<n;i++){
   cout<<v[i].second<<" ";
 
  }
  cout<<endl;
 
 }
 
 
 
 
 
 
}