#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    long long a[t];
    int res=0;
    int out=0;
    vector <int> aa;
    map<int,int> m;
 
    for (int i=0;i<t;i++){
        cin>>a[i];
        m[a[i]]=m[a[i]-1]+1;
        if(m[a[i]]>res){
            res=m[a[i]];
            out=a[i];
 
        }
    }
        int o=out-res+1;
     for (int k=0;k<t;k++){
        if(a[k]==o){
                aa.push_back(k+1);
            o++;
        }
     }
 
 
 
 
    cout<<res<<endl;
    for (int k=0;k<res;k++){
        cout<<aa[k]<<" ";
    }
}