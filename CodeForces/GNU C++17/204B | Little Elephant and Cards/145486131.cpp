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
ll k;
ll n,m;
bool verif(ll x){
 
 
 
 
 
 
}
 
 
 
int main(){
    int n;
    cin>>n;
    map<ll,ll> face;
    map<ll,ll> notface;
    set<ll> colors;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        face[x]++;
        colors.insert(x);
        colors.insert(y);
        notface[y]++;
        if(x==y){
            notface[x]--;
        }
    }
    ll obj=(n+1)/2;
    //ll l=0;
  //  ll r=n;
    ll res=INF;
    ll nbrofmoves=INF;
 
 
    for(auto itr :colors){
       // ll nbrofcards=face[*it]+min(max(0,notface[*it]),nbrmoves);
        //ll nbrofmoves=obj-face[*itr];
        if(face[itr]>=obj){
            res=0;
            break;
        }
        else if(face[itr]+notface[itr]>=obj){
            nbrofmoves=obj-face[itr];
            //cout<<itr<<endl;
        }
        res=min(res,nbrofmoves);
 
 
    }
    if(res==INF){
        cout<<-1<<endl;
 
    }
    else {
        cout<<res<<endl;
    }
 
 
 
 
 
}