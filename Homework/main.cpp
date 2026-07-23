#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b,c;
        cin>>a;
        int m;
        cin>>m;
        cin>>b;
        cin>>c;
        string ans=a;
        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                ans=b[i]+ans;
            }else{
                ans+=b[i];
            }
        }
        cout<<ans<<endl;
    }
}
