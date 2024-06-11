#include <iostream>

using namespace std;

int main()
{
    int n,t,compt=0;
    string ch;
    cin>>n>>t;
    cin>>ch;
    int i=0;
    while(i<=ch.size()){
        if(i==ch.size()){
            compt++;
            if(compt==t){
                cout<<ch;
                return 0;
            }else if(compt<t){
                i=0;
            }
        }
        if(ch[i]=='B' && ch[i+1]=='G'){
            char perm=ch[i];
            ch[i]=ch[i+1];
            ch[i+1]=perm;
            i++;
        }
        i++;
    }
    return 0;
}
