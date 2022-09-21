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
          map<int,int> m;
          int n;
        m.clear();
 
          cin>>n;
        for(int i=0;i<n;i++){
                int a;
            cin>>a;
            if(m.find(a)!=m.end()){
                m[a]+=1;
            }
            else {
                m[a]=1;
            }
        }
        int ans=0;
        for(auto i:m ){
            if(i.second>=2 && i.first!=0 && m.find(-i.first)==m.end()){
                ans+=2;
            }
            else {
                ans+=1;
            }
        }
         cout<<ans<<endl;
 
    }
 
 
}