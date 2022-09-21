#include <iostream>
#include <string>
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int maxx=-1000000;
    map<string,int> m;
    vector<pair<string,int>> v;
 
    int n;
    string s;
    int a;
    cin>>n;
 
    for (int j=0;j<n;j++){
 
        cin>>s>>a;
 
        if(m.find(s)!=m.end()){
                m[s]+=a;
 
 
        }
        else {
                        m.insert(make_pair(s,a));
 
        }
        v.push_back(make_pair(s,m[s]));
 
 
    }
        for(map<string,int>::iterator it =m.begin();it!=m.end();it++){
            maxx=max(maxx,it->second);
        }
        
        for (int i=0;i<n;i++){
 
            if(m[v[i].first]==maxx && v[i].second>=maxx){
                cout<<v[i].first;
                return 0;
            }
        }
        return 0;
 
 
 
 
 
 
 
}