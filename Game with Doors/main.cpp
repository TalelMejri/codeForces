#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int l,r,L,R;
        cin>>l>>r;
        cin>>L>>R;

        int il=max(l,L);
        int ir=min(r,R);
        int ans=0;
        if(ir>=il){
            ans+=ir-il;
            if(min(l,L)<il){
                ans++;
            }
            if(max(r,R)>ir){
                ans++;
            }
             cout<<ans<<endl;
        }else{
            cout<<"1"<<endl;
        }
    }
}
