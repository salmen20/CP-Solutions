#include <iostream>
 
using namespace std;
 
int main()
{
    int n;
    int t;
    cin>>n;
    while(n--){
        cin>>t;
        if(t==1){
            cout<<-1<<endl;
 
        }
        else {
            for(int i=0;i<t-1;i++){
                cout<<"9";
        }
        cout<<"4"<<endl;
    }
}
}