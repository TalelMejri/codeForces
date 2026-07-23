#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ch;
    cin>>ch;
    string ans="";
    for(size_t i=0;i<ch.length();i++){
        char x=tolower(ch[i]);
        if(x!='a' && x!='y' && x!='e' && x!='u' && x!='o' && x!='i'){
            ans+='.';
            ans+=x;
        }
    }
    cout<<ans;
}
