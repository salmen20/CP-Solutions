#include <bits/stdc++.h>
 
#define pb push_back
#define mp make_pair
#define f first
#define fastio ios::sync_with_stdio(0), cin.tie(0),cout.tie(0)
#define endl '\n'
#define s second
using namespace std;
typedef long long int  ll;
const ll inf=(int)1e19;
const ll N=(int) 998244353.;
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
 
            int n,k;
            cin>>n>>k;
            string s;
            vector<int> pos(n+7,0);  //pos that will change
            cin>>s;
            int a[n+7];
            for(int i=1;i<=n;i++){
                a[i]=s[i-1]-'0';
            }
            int paire;
            if(k%2==0){
                paire=0;
            } // test parity of k
            else {
                paire=1;
            }
            for(int i=1;i<=n;i++){
                if(a[i]==paire && k){
                    a[i]^=1;
                    k--;
                    pos[i]=1;
 
 
                }
                else {
                    pos[i]=0;
                }
            }
            if(k%2==1){
                a[n]^=1;
            }
            pos[n]+=k;
            for(int i=1;i<=n;i++){
                a[i]^=paire;
            }
            for(int i=1;i<=n;i++){
                cout<<a[i];
            }
            cout<<endl;
            for(int i=1;i<=n;i++){
                cout<<pos[i]<<" ";
            }
            cout<<endl;
            pos.clear();
 
 
        }
 
}