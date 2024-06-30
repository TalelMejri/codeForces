#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==1){
            cout<<n<<endl;
        }else{
            int res=(n*k)-(k-1);
            cout<<res<<endl;
        }
    }
}
