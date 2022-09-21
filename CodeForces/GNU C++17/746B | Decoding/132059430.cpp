#include <iostream>
#include <bits/stdc++.h>
#include <string>
 
 
using namespace std;
 
 
int main()
{
int n;
string s;
string res="";
cin>>n;
cin>>s;
 
for (int i=0;i<n;i++){
    if((n-i)%2==0){
            res=s[i]+res;
 
    }
    else {
            res=res+s[i];
    }
}
cout<<res;
}