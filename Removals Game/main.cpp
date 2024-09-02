#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        if(a==b){
            cout<<"Bob"<<endl;
            continue;
        }

        reverse(a.begin(), a.end());

        if(a==b){
            cout<<"Bob"<<endl;
            continue;
        }

        cout<<"Alice"<<endl;

    }
}
