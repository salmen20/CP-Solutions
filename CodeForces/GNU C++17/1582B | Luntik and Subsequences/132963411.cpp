#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
  int t,n;
  long long val;
  int som=0;
  int nbrzero=0;
  int nbrone=0;
  long long res;
  cin>>t;
 
  for (int i=0;i<t;i++){
        cin>>n;
      for(int j=0;j<n;j++){
            cin>> val;
 
            if(val==1){
                nbrone+=1;
            }
            else if(val==0){
                nbrzero+=1;
            }
 
 
          }
          if (nbrone==0){
            cout<<0<<endl;
 
          }
 
          else {
                res=pow(2,nbrzero)*nbrone;
            cout<<res<<endl;
          }
          nbrone=0;
          nbrzero=0;
          res=0;
 
          }
  return 0;
}