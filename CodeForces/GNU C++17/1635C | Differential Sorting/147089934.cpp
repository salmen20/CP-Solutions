#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=100005;
 
 
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll ans=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
 
        }
        ll tmp=n;
        if(n>=2){
            if(a[n-2]>a[n-1]){
                cout<<-1<<endl;
            }
            else {
                if(a[n-1]>=0){
                    cout<<tmp-2<<endl;
 
                for(int i=0;i<n-2;i++){
                    cout<<i+1<<" "<<tmp-1<<" "<<tmp;
                    cout<<endl;
                }
                }
                else {
                    ll b[n];
                    for(int i=0;i<n;i++){
                        b[i]=a[i];
                    }
                    sort(b,b+n);
                    bool sorted=true;
                    for(int i=0;i<n;i++){
                        if(a[i]!=b[i]){
                            sorted=false;
                            break;
                        }
                    }
                    if(sorted){
                        cout<<0<<endl;
                    }
                    else {
                        cout<<-1<<endl;
                    }
 
                }
 
 
 
            }
        }
 
 
    }
return 0;
}