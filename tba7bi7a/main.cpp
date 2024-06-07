#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        long long p,a,b,c;
        cin>>p>>a>>b>>c;
        if(p%a==0 || p%c==0 || p%b==0){
            cout<<0<<endl;
        }
        else{
            long long res=min(a-p%a,min(b-p%b,c-p%c));
            cout<<res<<endl;
        }
    }
    return 0;
}
