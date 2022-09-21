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
const int INF =1e6+2;
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
/*bool compare(vector<int> v(3) , vector<int> vv(3)){
    if(v[0]==vv[0]){
        return v[1]<vv[1];
 
    }
    return v[0]<vv[0];
 
 
 
}*/
 
int main(){
  map<int,int> c;
  int n;
  cin>>n;
  int x,y;
  for(int i=0;i<n;i++){
    cin>>x;
    c[x]++;
  }
  int m;
  cin>>m;
  int a[m];
  int b[m];
  for(int i=0;i<m;i++){
    cin>>a[i];
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
 
  vector<vector<int>> v;
 
    v.clear();
  for(int i=0;i<m;i++){
    vector<int> v1(3);
    v1.clear();
    v1.push_back(c[a[i]]);
    v1.push_back(c[b[i]]);
    v1.push_back(i+1);
    v.push_back(v1);
  }
  sort(v.begin(),v.end());
  /*for(int i=0;i<m;i++){
    cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2]<<"   "<<endl;
  }*/
  cout<<v[m-1][2]<<endl;
 
 
 
return 0;
}