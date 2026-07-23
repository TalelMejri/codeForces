#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string ch,res="";
        cin>>ch;
        for(int i=ch.size()-1;i>=0;i--){
            if(ch[i]=='p'){
                res+='q';
            }else if(ch[i]=='q'){
                res+='p';
            }else{
                res+=ch[i];
            }
        }
        cout<<res<<endl;
    }
}
