#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    string s;
    cin>>n>>s;
    int on=0;
    for(int i=0;i<n;i++){
        on+=(s[i]=='1');
    }
    if(on%2==1){
        cout<<"NO"<<endl;
    }else{
    int t=1;
        if(on==2){
            for(int i=0;i<n-1;i++){
                if(s[i]==s[i+1] && s[i]=='1'){
                    t=0;
                }
            }
        }
        if(t){
        cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    }
}
