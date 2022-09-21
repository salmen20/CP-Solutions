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
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    parent[i]=i;
    sizee[i]=1;
  }
  int b=n;
  n--;
  vector<pair<int,int>> v;
  while(n--){
    int x,y;
    cin>>x>>y;
    x--;
    y--;
    int px=find_set(x);
    int py=find_set(y);
    if(py==px){
            int newx=x+1;
            int newy=y+1;
            v.push_back({newx,newy});
 
    }
    parent[px]=py;
    sizee[py]+=sizee[px];
    //sizee[py]+=sizee[px];
//    edge[py]+=edge[px]+1;
  }
 
  int nbr=0;
  bool ok=false;
  int first=0;
  vector<int> a;
  for(int i=0;i<b;i++){
    if(parent[i]==i){
           // cout<<i<<" hereee "<<endl;
        if(!ok){
            first=i;
            ok=true;
        }
        else {
            nbr++;
            int idx=i+1;
            a.push_back(idx);
 
        }
    }
 
  }
first++;
 
int l=v.size();
int k=a.size();
//cout<<k<<" here "<<endl;
/*for(int i=0;i<k;i++){
    cout<<a[i]<<" ";
}
cout<<endl;*/
//for(int i=0;i<l;i++){
    //cout<<v[i].first<<"  "<<v[i].second<<"here" <<endl;
//}
 
//cout<<v[0].first<<"  "<<v[0].second<<endl;
//cout<<first<<endl;
//cout<<nbr<<endl;
if(nbr==0){
    cout<<0<<endl;
}
else {
        cout<<nbr<<endl;
  for(int i=0;i<nbr;i++){
    cout<<v[i].first<<" "<<v[i].second<<" "<<a[i]<<" "<<first<<" "<<endl;
 
 
  }
}
 
 
}