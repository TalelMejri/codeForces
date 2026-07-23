#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> tab;
        tab.reserve(n);

        int check_parity=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
             int parity = x % 2;
            if(i!=0){
                if(tab[i-1]%2!=parity){
                    check_parity=1;
                }
            }
         tab.push_back(x);
        }
        if(check_parity){
                sort(tab.begin(),tab.end());
        }
        for(int i=0;i<n;i++){
            cout<<tab[i]<<" ";
        }
        cout<<endl;
    }
}
