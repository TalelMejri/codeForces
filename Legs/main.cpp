#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int ans=0;
    while(n>1){
        if(n>=4){
            n-=4;
            ans++;
            continue;
        }
        if(n>=2){
            n-=2;
            ans++;
            continue;
        }
    }
    cout<<ans<<endl;
   }
}
