#include <iostream>
 
using namespace std;
/*int dp[1000000000001];
int s(int x,int n){
    for (int i=0;i<1001;i++){
        if (i==0){
            dp[i]=x;
        }
        else {
            dp[i]=dp[i-1]+9;
        }
 
    }
    return dp[n];*/
 
long long s(int x,long long  n){
    long long  s=0;
    long long  r=x;
    while(s<n){
            r=r+9;
            s=s+1;
 
    }
    return r;
 
 
}
 
 
 
 
 
 
 
 
 
 
int main()
{
    long long  n;
    long long k;
    long long  x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>k>>x;
        cout<<s(x,k-1)<<endl;
 
 
    }
    return 0;
}