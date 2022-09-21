#include <iostream>
#include <cctype>
#include <math.h>
using namespace std;
 
bool isPrime(long long  n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
 
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
 
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
 
 
 
 
int main()
{
    int n;
     double h;
 
    cin>>n;
    string res;
    long long k;
    for (int i=0;i<n;i++){
        cin>>k;
        if(k==1){
            cout<<"NO"<<endl;
 
        }
        else{
       h=sqrt(k);
 
 
 
        if(int(h)==h && isPrime(h)){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
 
        }
        }
 
    }
 
 
 
 
 
 
 
}