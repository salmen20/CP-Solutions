#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
void solve(){
    string s;
    int res=0;
    cin>>s;
    int m=0;
    int j=0;
    int m1=0;
    int j1=0;
    vector<pair<int,int>> v;
    set<vector<pair<int, int>> > se;
 
    for (int i=0;i<s.size();i++){
            int k=0;
            m1=m;
            j1=j;
 
        k=se.size();
 
        if(s[i]=='N'){
            v.push_back(make_pair(m,j));
                v.push_back(make_pair(m1+1,j1));
                sort(v.begin(),v.end());
                se.insert(v);
                m=m1+1;
        }
        else if(s[i]=='S'){
            v.push_back(make_pair(m,j));
                v.push_back(make_pair(m1-1,j1));
                sort(v.begin(),v.end());
 
                se.insert(v);
            m=m1-1;
 
        }
        else if(s[i]=='W'){
          v.push_back(make_pair(m,j));
                v.push_back(make_pair(m1,j1-1));
                                sort(v.begin(),v.end());
 
                se.insert(v);
            j=j1-1;
        }
        else{
          v.push_back(make_pair(m,j));
                v.push_back(make_pair(m1,j1+1));
                                sort(v.begin(),v.end());
 
                se.insert(v);
            j=j1+1;
        }
        if(k!=se.size()){
            res=res+5;
        }
 
        else {
            res=res+1;
        }
        v.clear();
 
 
    }
    cout<<res<<endl;
 
 
 
 
 
}
 
 
 
 
 
 
 
int main()
{
    int n;
 
    cin >>n;
    while(n--){
            solve();
 
    }
}