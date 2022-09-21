#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
        int n,x,y,z;
        int v=0;
        int c=0;
        int d=0;
        cin>>n;
        while(n--){
            cin>>x;
            cin>>y;
            cin>>z;
            v=v+x;
            c=c+y;
            d=d+z;
        }
        if(v==0 && c==0 && d==0){
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
}