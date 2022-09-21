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
bool palindrom(string s){
    string tmp=s;
    reverse(s.begin(),s.end());
    if(s==tmp){
        return true;
 
    }
    else {
        return false;
    }
 
 
 
}
 
 
int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
 
 
      int t;
      cin>>t;
      while(t--){
        int n;
        int res=0;
        cin>>n;
        int a[n];
 
        set<int> s;
        map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
            freq[a[i]]++;
            s.insert(a[i]);
        }
        int mxfq=0;
        for(auto itr:freq){
            if(itr.second>mxfq){
                    mxfq=itr.second;
            }
        }
        int elem=mxfq;
        if(s.size()==1){
            cout<<0<<endl;
        }
 
        else {
                int tmp=n-mxfq;
                while(tmp>0){
                        res++;
                        res+=min(elem,tmp);
                        tmp-=min(elem,tmp);
                        elem=n-tmp;
 
                }
 
            cout<<res<<endl;
        }
 
 
      }
 
 
 
 
 
 
return 0;
}