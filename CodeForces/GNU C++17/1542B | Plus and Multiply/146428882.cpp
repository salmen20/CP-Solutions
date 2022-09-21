#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool solve(long long int n,long long int a,long long int b){
 
 
 
            if (a== 1 ){
                if((n-1)%b==0){
                        return true;}
 
 
               return false;
            }
            if(b==1){
                return true;
            }
 
 
                for (long long int i=1;i<=n;i*=a){
                    if ((n-i)%b==0){
                        return true;}
                }
 
 
            return false;
        }
 
 
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int  t;
     cin>>t;
        while (t--){
            long long int  n,a,b;
            cin>>n>>a>>b;
            if(solve(n,a,b)){
                cout<<"YES"<<endl;
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    return 0;
}