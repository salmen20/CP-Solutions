#include <iostream>
#include <string.h>
#include<bits/stdc++.h>
 
 
using namespace std;
 
 
int pos(string s){
    int r=0;
    int k;
    k=s.size();
    char m=s[0];
    for (int i=0;i<k;i++){
        if (m>s[i]){
            m=s[i];
            r=i;
        }
    }
    return r;
}
 
char kif(string s){
 
    int k;
    k=s.size();
    char m=s[0];
    for (int i=0;i<k;i++){
        if (m>s[i]){
            m=s[i];
 
        }
    }
    return m;
}
 
 
 
 
 
 
int main()
{
    int t;
    string s;
char a;
    string b="";
    int k;
 
 
 
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>s;
        k=s.size();
        a=kif(s);
        int r;
        r=pos(s);
 
        for(int j=0;j<k;j++){
            if(j!=r){
                b=b+s[j];
            }
 
 
        }
        cout<<a<<" "<<b<<endl;
        b="";
 
    }
}