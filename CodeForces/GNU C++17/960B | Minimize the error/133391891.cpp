#include <iostream>
#include <bits/stdc++.h>
 
 
using namespace std;
 
int main()
{
    int n,k1,k2;
    cin>>n>>k1>>k2;
    priority_queue<long long> q;
    int a[n];
    int b[n];
    long long res=0;
    int k;
    int s[n];
    k=k1+k2;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
        q.push(abs(a[i]-b[i]));
    }
    while(k>0){
            long long first=q.top();
            q.pop();
            first--;
            k--;
            q.push(abs(first));
 
 
    }
    while(!q.empty()){
        res=res+pow(q.top(),2);
        q.pop();
    }
    cout<<res<<endl;
 
 
 
 
 
 
 
}