#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
 
 
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i,n)             for (ll i=0;i<n;i++)
#define fr1(i,n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")
//ll  pow_calc(ll x, ll e){ ll res;  if (e == 0) res = 1; else if (e == 1) res = x;  else { res = bigpow(x, e / 2);  res = res * res;  if (e % 2) res = res * x; } return res; }
//ll find_all_divisor(ll n){  fr1(i,sqrt(n)){     ll i,x;  if(n % i == 0)  { x = n / i; v.pb(i);  if(i != x) v.pb(x);}}}
///cin.ignore(); // Need when we take input as a string line before  getline(cin,s)
vector<ll>v[100005];
bool visited[100005];
ll a[100005];
 
 
ll dfs(ll n)
{
    ll mn,nd;
    visited[n]=true;
    mn=a[n];
    fr(i,v[n].size())
    {
         nd=v[n][i];
        if(!visited[nd])
        {
            mn=min(mn, dfs(nd));
        }
    }
    //cout<<mn<<endl;
    return mn;
}
 
int main()
{
    ll m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
 
      ll cnt=0,ans=0;
      scl(n);
      cin>>m;
      for(i=1;i<=n;i++)
      {
          cin>>a[i];
      }
      fr(i,m)
      {
          cin>>x>>y;
          v[x].pb(y);
          v[y].pb(x);
      }
 
      fr1(i,n)
      {
          if(!visited[i ])
            ans+=dfs(i);
      }
      pfl(ans);
return 0;
}