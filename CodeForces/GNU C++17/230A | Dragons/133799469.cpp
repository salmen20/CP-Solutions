#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
    int s;
    cin>>s;
    int t;
    cin>>t;
    int c=0;
    vector<pair<int,int>> v;
    for(int i=0;i<t;i++){
            int a;
            int b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
 
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++){
        if(v[i].first<s){
            c++;
            s+=v[i].second;
        }
        else {
            break;
        }
    }
    if(c==t){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
 
 
 
 
 
 
 
}
 
int main()
{
 
 
solve();
 
 
}