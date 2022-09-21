#include <bits/stdc++.h>
#include <iomanip>
#include <cmath>
// #define endl '\n'
#define mod 1000000007
#define M_PI           3.14159265358979323846
#define prime6 347717
#define fori for(int i=0;i<n;i++)
#define forj for(int j=0;j<m;j++)
// #define first fi
// #define second se
using namespace std;
using cd = complex<double>;
 
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> ii;
typedef pair<ll,ll> pll;
 
 
 
const int inf=int(1e9)+5;
const ll mo=998244353;
const int N=1e6+1;
 
 
void no(){
    cout<<"NO"<<endl;
}
void yes(){
    cout<<"YES"<<endl;
}
 
 
 
bool solve(int a[],int n,int x){
 
   if(n>x){
    return true;
   }
   bool dp[x];
   memset(dp,false,x);
   for(int i=0;i<n;i++){
 
        bool temp[x];
        memset(temp,false,x);
        for(int j=0;j<x;j++){
            if(dp[j]==true){
                if(dp[(j+a[i]) % x] == false){
 
                    temp[(j+a[i]) % x] = true;
                }
            }
        }
        for(int j=0;j<x;j++){
            if(temp[j]==true){
                dp[j]=true;
            }
        }
        dp[a[i]%x]=true;
 
 
   }
   return dp[0];
 
}
 
int main()
{
     ios_base::sync_with_stdio(false);
        cin.tie(NULL);cout.tie(NULL);
        int t;
        cin>>t;
        while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool test=false;
        ll have[33]={0};
        for(int i=0;i<n;i++){
                ll r=0;
            while (a[i] >0) {
                    a[i]/=2;
                    r++;
            }
            have[r]++;
 
 
        }
 
        ll ans=0;
        for(ll i=0;i<=32;i++){
 
            ans+=have[i]*(have[i]-1)/2;
        }
        cout<<ans<<endl;
        }
    return 0;
}