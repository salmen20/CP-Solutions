#include <iostream>
#include <cctype>
using namespace std;
int nbrplus(string s){
    int nbr=0;
 
    int k;
    k=s.size();
    for (int i=0;i<k;i++){
        if (s[i]=='+'){
            nbr=nbr+1;
        }
    }
    return nbr;
 
}
int nbrpmoins(string s){
    int nbr=0;
 
    int k;
    k=s.size();
    for (int i=0;i<k;i++){
        if (s[i]=='-'){
            nbr=nbr+1;
        }
    }
    return nbr;
 
}
 
 
 
 
 
 
int main()
{
 
   int n;
   cin>>n;
   int nbrp=0;
   int nbrm=0;
   string s;
 
   for(int i=0;i<n;i++){
        cin>>s;
        nbrp+=nbrplus(s);
        nbrm+=nbrpmoins(s);
 
   }
   int res;
   res=(nbrp/2)-(nbrm/2);
   cout<<res<<endl;
 
 
 
 
 
}