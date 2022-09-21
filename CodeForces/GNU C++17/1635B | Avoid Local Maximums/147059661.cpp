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
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
               ans++;
               ll tmp;
            if(i+2<n){
                tmp=max(a[i],a[i+2]);
                a[i+1]=tmp;
            }
            else {
                a[i+1]=max(a[i+1],a[i]);
            }
               }
        }
        cout<<ans<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
}
 
return 0;
}