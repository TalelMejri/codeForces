#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        string ch;
        cin>>n>>ch;
        int compt=0;
        for(int i=0;i<n;i++){
            if(ch[i]=='U')
            {
                compt++;
            }
        }
        if(compt%2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
