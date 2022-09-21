#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    map<string,int> m;
    cin>>n;
    int k;
    string s;
    string r;
    while(n--){
        cin>>s;
        k=m.size();
        m.insert(make_pair(s,1));
        if(k!=m.size()){
            cout<<"OK"<<endl;
        }
        else {
 
 
 
                cout<<s<<m[s]<<endl;
                m[s]+=1;
 
 
 
        }
    }
}