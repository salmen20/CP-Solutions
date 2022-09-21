#include <iostream>
#include <cctype>
using namespace std;
 
 
 
 
 
 
 
int main()
{
 
  int n;
  int k;
  int h=0;
 
  int res=0;
  cin>>n;
  cin>>k;
  int a[n];
  for (int i=0;i<n;i++){
    cin>>a[i];
  }
 
  while(a[h]>=a[k-1] && h<n && a[h]>0){
    res=res+1;
    h=h+1;
  }
  cout<<res<<endl;
  res=0;
 
 
 
 
 
}