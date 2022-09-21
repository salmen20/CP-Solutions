#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,c,tot;
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        
        cin>>a>>b>>c;
        tot=a+(2*b)+(3*c);
        cout<<tot%2<<endl;
        
    }
    return 0;
}