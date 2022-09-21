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
//const int N = 2e5 + 5;
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
vector<ll> res;
 
const int N=1e5+5;
bool visited[N];
vector<ll> graph[N];
priority_queue<ll,vector<ll>,greater<ll> > q;
 
void bfs(ll pos){
 visited[pos]=true;
 q.push(pos);
 while (!q.empty()){
  ll x=q.top();
  res.pb(x);
  q.pop();
  for (ll i=0;i<graph[x].size();i++){
   ll next=graph[x][i];
   if(!visited[next]){
 
    visited[next]=true;
    q.push(next);}}}
 return;}
int main(){
 
    ll n,m;
    cin>>n>>m;
    ll x,y;
    res.clear();
    for(ll i=0;i<m;i++){
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    /*for(ll i=1;i<=n;i++){
 
            sort(graph[i].begin(),graph[i].end());
 
    }*/
    bfs(1);
    //cout<<1<<" ";
    for(auto itr:res){
        cout<<itr<<" ";
    }
    cout<<endl;
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
}