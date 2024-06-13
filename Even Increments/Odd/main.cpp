#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,x,n;
    set<int> s[2];
    cin>>t;
    while(t--){
        cin>>n;
        s[0].clear();
        s[1].clear();
        for(int i=0;i<n;i++){
            cin>>x;
            s[i%2].insert(x%2);
        }
        if(s[0].size()==1 && s[1].size()==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
