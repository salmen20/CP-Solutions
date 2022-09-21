#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
void solve(){
        int t;
        long long res=0;
        long long somme=0;
        cin>>t;
        long long a[t];
        for(int j=0;j<t;j++){
            cin>>a[j];
            somme+=a[j];
        }
        somme*=2;
        if(somme%t==0){
                /*for(int l=0;l<t;l++){
                    for(int m=0;m<t;m++){
                        if(a[l]+a[m]==(somme/t) && l!=m){
                            res+=1;
                        }
                    }
                }*/
                            long long k=somme/t;
                            map<long long, long long> m;
 
                            for (int i = 0; i < t; i++) {
 
                                    res += m[k - a[i]];
 
 
                                    m[a[i]]++;
                            }
 
 
 
 
        }
 
 
        cout<<res<<endl;
}
 
 
int main()
{
    int n;
 
    cin>>n;
 
    for(int i=0;i<n;i++){
 
        solve();
    }
 
 
}