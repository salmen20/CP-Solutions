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
 
 
int main()
{
     ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--){
                int n,b,r;
        cin>>n>>r>>b;
        int tmp=r/(b+1);
        int tmpp=r%(b+1);
        while(r){
                int k;
                k=tmp+(tmpp>0);
                if(tmpp-1>0){
                    tmpp=tmpp-1;
                }
                else {
                    tmpp=0;
                }
                r-=k;
                while(k--){
                    cout<<"R";
                }
                if(b>0){
                    cout<<"B";
                    --b;
                }
        }
        cout<<endl;
 
        }
 
}