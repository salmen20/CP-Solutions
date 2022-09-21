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
 
 
 
 
 
 
int main()
{
 
int t;
cin>>t;
while(t--){
 
 
    ll x,y,z;
    cin>>x>>y>>z;
    ll a[3];
    a[0]=x;
    a[1]=y;
    a[2]=z;
    sort(a,a+3);
    if(a[0]+a[1]==a[2]){
        yes();
 
    }
    else if (a[0]%2==0 && a[1]==a[2]){
        yes();
 
    }
    else if(a[0]==a[1] && a[2]%2==0){
        yes();
    }
    else {
        no();
    }
}
 
 
 
 
 
 
 
 
 
 
}