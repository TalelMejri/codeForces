#include <iostream>
#include <string>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
        string x;
        cin>>x;
        int ans;
        if(x.size()==1){
            ans=(x[0]-'0');
        }else{
            ans=(x[0]-'0');
            for(int i=0;i<x.size();i++){
                if((x[i]-'0')<ans){
                    ans=(x[i]-'0');
                }
            }
        }
        cout<<ans<<endl;
     }
}
