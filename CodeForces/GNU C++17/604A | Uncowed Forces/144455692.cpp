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
 
 
int main(){
  double m[5];
  double w[5];
  double h,hh;
  double x[5]={500,1000,1500,2000,2500};
  for(int i=0;i<5;i++){
    cin>>m[i];
  }
  for(int i=0;i<5;i++){
    cin>>w[i];
  }
  cin>>h>>hh;
  double  res=0;
  for(int i=0;i<5;i++){
    res+=max(.3*x[i],(1-(m[i]/250))*x[i]-50*w[i]);
  }
  res+=100*h;
  res-=50*hh;
  cout<<res<<endl;
 
return 0;
}