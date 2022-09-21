#include <iostream>
#include <bits/stdc++.h>
#include <string>
 
 
using namespace std;
 
 
 
int main()
{
 
    int n,k;
    cin>>n;
    cin>>k;
    int l=0,m=0;
    int b=0;
    int bestcase=0;
    int worstcase=0;
    string correct;
    string tab[n];
 
 
    for (int i=0;i<n;i++){
            cin>>tab[i];
 
    }
    cin>>correct;
    int s=correct.size();
    for(int j=0;j<n;j++){
        if(tab[j].size()<s){
            l=l+1;
 
        }
 
        else if(tab[j].size()>s){
            b=b+1;
        }
    }
 
 
    cout<<l+1+((l/k)*5)<<" "<<(n-b-1)+ (((n-b-1)/k)*5) +1;
 
 
 
}