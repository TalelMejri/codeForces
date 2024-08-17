#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>s;
        int trouve=true;
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            s.insert(x);
            if (i!=0) {
                if (s.find(x-1)==s.end() && s.find(x+1)==s.end()) trouve=false;
            }
        }
        if(trouve){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
