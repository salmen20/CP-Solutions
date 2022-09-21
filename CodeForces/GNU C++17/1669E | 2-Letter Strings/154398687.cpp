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
 
const int MOD = 998244353 ;
//const int N = 2e5 + 5;
const double PI = acos(-1);
const double eps = 1e-10;
const long long oo = 1e10;
const int K = 26;
const int M=(1e9)+7;
const ll inf = (1LL << 61) - 1;
const int INF =1e9+2;
//#define p 101
 
void yes()
{
    cout<<"YES\n";
}
void no()
{
    cout<<"NO\n";
}
string maxNum(string s, int k)
{
 int n=s.size();
    // Number of bits in n
 
 
    // Find the binary representation of n
 
 
    // To count the number of 0s flipped
    int cn = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 0 && cn < k) {
            s[i] = 1;
            cn++;
        }
    }
 
    // Return the decimal equivalent
    // of the maximized number
    return s;
}
ll pairCount(map<string, ll> &d)
{
    ll sum = 0;
    for (auto i : d)
        sum += (i.second * (i.second - 1)) / 2;
 
    return sum;
}
 
ll difference(vector<string> &array, ll m)
{
 
    map<string, ll> changed, same;
 
 
    for (auto s : array)
    {
 
        same[s]++;
 
 
        for (ll i = 0; i < m; i++)
        {
 
            string t = s.substr(0, i) + "//" + s.substr(i + 1);
 
            changed[t]++;
        }
    }
 
    // Return counted pairs - equal pairs
    return pairCount(changed) - pairCount(same) * m;
}
 
int main()
{
     ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll t;
        cin>>t;
    while(t--){
            ll n;
    cin>>n;
    vector<string> v;
    for(ll i=0;i<n;i++){
        string tmp;
        cin>>tmp;
        v.pb(tmp);
    }
   // sort(v.begin(),v.end());
    cout<<difference(v,2)<<endl;
    v.clear();
 
 
 
    }
    return 0;
 
}