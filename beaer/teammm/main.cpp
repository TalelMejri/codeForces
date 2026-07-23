#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a,b,c,ans,somme;
    ans=0;
    while(t--){
        somme=0;
        cin>>a>>b>>c;
        somme=a+b+c;
        if(somme>1){
            ans++;
        }
        somme=0;
    }
    cout<<ans<<endl;
}
