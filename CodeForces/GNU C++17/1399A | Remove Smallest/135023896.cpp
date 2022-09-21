#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
 
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        int t;
        cin>>t;
        int a[t];
        for(int j=0;j<t;j++){
            cin>>a[j];
        }
        sort(a,a+t);
        int c=0;
        for(int k=0;k<t-1;k++){
            if(a[k+1]-a[k]>1){
                c=1;
                break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
 
    }
}