#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
        int a,b,c,d;
    cin>>a>>b>>c>>d;
    string ch;
    for(int i=1;i<=12;i++){
        if(i==a || i==b){
            ch+="a";
        }else if(i==c || i==d){
            ch+="b";
        }
    }
    if(ch=="abab" || ch=="baba"){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
}
