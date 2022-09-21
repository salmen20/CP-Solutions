#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long  a[n];
        long long b[n];
       long long   mina=1e9;
         long long  minb=1e9;
        for (int j=0;j<n;j++){
            cin>>a[j];
        }
        for (int j=0;j<n;j++){
            cin>>b[j];
        }
        for (int k=0;k<n;k++){
            if(a[k]<mina){
                mina=a[k];
            }
        }
        for (int k=0;k<n;k++){
            if(b[k]<minb){
                minb=b[k];
            }
        }
        long long  res=0;
        for (int k=0;k<n;k++){
            res+=max(b[k]-minb,a[k]-mina);
        }
        cout<<res<<endl;
 
    }
}