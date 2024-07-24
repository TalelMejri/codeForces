#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        int ans=0;
        int i=0;
        while(i<n){
            if(ch[i]=='B'){
                ans=i==0 ? 1 : i;
                break;
            }
            i++;
        }
        int lastIndice=0;
        i=0;
        while(i<n){
             if(ch[i]=='B'){
                lastIndice=i==0 ? 1 : i;
            }
            i++;
        }
        cout<<lastIndice<<" "<<ans<<endl;

    }
}
