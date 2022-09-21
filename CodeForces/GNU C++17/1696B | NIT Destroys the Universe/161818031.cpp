#include <bits/stdc++.h>
 
#define endl '\n'
#define f(i,s,n) for(int i=s;i<n;i++)
#define f1(i,n,s) for(int i=n;i>=s;i--)
#define pb push_back
#define fi first
#define se second
 
 
//typedef pair<pair<ll,ll>,ll> coord;
 
using namespace std;
void solve(){
    long long res=0;
    long long n,k;
    cin>>n;
    long long nbr=0;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            nbr++;
        }
 
 
    }
    if(nbr==n){
        cout<<0<<endl;
        return;
    }
    if(nbr==0){
        cout<<1<<endl;
        return;
    }
 
 
for(int i=0;i<n;i++){
    if(a[i]==0){
        continue;
    }
    if(i==n-1 || a[i+1]==0){
        res++;
    }
}
    if(res==1){
        cout<<1<<endl;
        return;
 
    }
    else{
        cout<<2<<endl;
        return;
    }
 
 
}
 
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.precision(30);
 //  freopen("triangles.in","r",stdin);
    int t=1;
    cin>>t;
    while(t--){
            solve();
 
    }
    return 0;
}