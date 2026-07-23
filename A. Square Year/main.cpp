#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=ceil(sqrt(n));
        if(ans*ans==n){
            cout<<  0 << " "<< ans<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }
}
