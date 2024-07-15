#include <iostream>

using namespace std;

int main()
{
    string ch;
    cin>>ch;
    string ans="";
   int i=0;
   while(i<ch.size()){
    if(ch[i]=='W' && ch[i+1]=='U' && ch[i+2]=='B'){
        i+=2;
        ans+=" ";
    }else{
        ans+=ch[i];
    }
    i++;
   }
    cout<<ans;
}
