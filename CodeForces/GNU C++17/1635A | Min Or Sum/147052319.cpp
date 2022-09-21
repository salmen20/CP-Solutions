#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=100005;
 
 
 
 
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        ll res=0;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            res|=a[i];
        }
        cout<<res<<endl;
 
}
 
return 0;
}