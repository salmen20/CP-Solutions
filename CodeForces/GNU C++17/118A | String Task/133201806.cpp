#include <iostream>
#include <cctype>
using namespace std;
 
string delvoy(string s){
    int k;
    string ch="";
    k=s.size();
    for (int i=0;i<k;i++){
            s[i]=tolower(s[i]);
 
        if (s[i]!='a' && s[i]!='o' && s[i]!='y' && s[i]!= 'e'&& s[i]!='u' && s[i]!='i' ){
                ch=ch+s[i];
        }
    }
    return ch;
 
 
}
 
 
int main()
{
 
    string s;
    int m;
    string ress;
 
    string res=".";
 
    cin>>s;
    ress=delvoy(s);
 
 
    m=ress.size();
  for (int j=0;j<m-1;j++){
            res=res+ress[j]+".";
        }
        res=res+ress[m-1];
        cout<<res<<endl;
 
 
 
 
 
}