#include <iostream>
#include<bits/stdc++.h>
 
using namespace std;
 
void election(int n){
    long long  avotes=0;
    long long  bvotes=0;
    long long cvotes=0;
    int res[3]={0,0,0};
    for (int i=0;i<n;i++){
            cin>>avotes>>bvotes>>cvotes;
            if (max(avotes,max(bvotes,cvotes))==avotes && max(avotes,max(bvotes,cvotes))==bvotes){
                    res[0]=1;
                    res[1]=1;
                    res[2]=avotes-cvotes+1;
            }
            else if(max(avotes,max(bvotes,cvotes))==bvotes && max(avotes,max(bvotes,cvotes)) ==cvotes){
                res[0]=bvotes-avotes+1;
                res[1]=1;
                res[2]=1;
 
            }
            else if(max(avotes,max(bvotes,cvotes))==avotes && max(avotes,max(bvotes,cvotes))==cvotes){
                    res[0]=1;
                    res[1]=avotes-bvotes+1;
                    res[2]=1;
            }
           else if(avotes==bvotes && avotes==cvotes){
                    res[0]=res[1]=res[2]=1;
            }
            else if(avotes==max(avotes,max(bvotes,cvotes))){
                    res[0]=0;
                    res[1]=avotes-bvotes+1;
                    res[2]=avotes-cvotes+1;
 
 
            }
            else if(bvotes==max(avotes,max(bvotes,cvotes))){
                res[0]=bvotes-avotes+1;
                res[1]=0;
                res[2]=bvotes-cvotes+1;
 
            }
            else {
                res[0]=cvotes-avotes+1;
                res[1]=cvotes-bvotes+1;
                res[2]=0;
 
            }
 
            cout<<res[0]<<" "<<res[1]<<" " <<res[2]<<endl;
 
 
 
 
}
}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int main()
{
int n;
cin>>n;
election(n);
}