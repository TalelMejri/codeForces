#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> tab(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }

        if(n==2 && tab[1]-tab[0]>1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }

    }
}
