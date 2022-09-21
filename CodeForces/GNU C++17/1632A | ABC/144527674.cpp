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
bool canFormPalindrome(string a)
{
    // bitvector to store
    // the record of which character appear
    // odd and even number of times
    int bitvector = 0, mask = 0;
    for (int i=0; a[i] != '\0'; i++)
    {
        int x = a[i] - 'a';
        mask = 1 << x;
 
        bitvector = bitvector ^ mask;
    }
 
    return (bitvector & (bitvector - 1)) == 0;
}
 
 
int main(){
    int t;
    cin>>t;
    int n;
    string s;
    while(t--){
        cin>>n;
        cin>>s;
        if(n==1){
            cout<<"YES"<<endl;
        }
        else if(n==2){
                if(s[0]!=s[1]){
                    cout<<"YES"<<endl;
                }
                else {
                    cout<<"NO"<<endl;
                }
 
        }
        else {
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
 
}