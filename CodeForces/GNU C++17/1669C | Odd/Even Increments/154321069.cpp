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
 
int main()
{
     ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
 
        while(t--){
                int n;
        cin>>n;
        int a[n];
        map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
 
        }
        bool verifp=true;
        bool verifip=true;
        for(int i=0;i<n-2;i++){
            if(a[i]%2!=a[i+2]%2){
                verifp=false;
            }
 
 
 
 
        }
        int k=0;
        int b=0;
        int c=0;
        int d=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(a[i]%2==0){
                    k++;
                }
                else{
                    b++;
                }
            }
            else {
                if(a[i]%2==0){
                    c++;
                }
                else {
                    d++;
                }
            }
        }
        if(k!=0 && b!=0 || c!=0 && d!=0){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
 
 
 
 
 
 
        }
        return 0;
 
}