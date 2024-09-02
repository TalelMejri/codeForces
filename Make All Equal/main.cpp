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
        map<int,int> mp;
        for(int i=0;i<n;i++){
            cin>>tab[i];
            mp[tab[i]]++;
        }

        if(n==1){
            cout<<0<<endl;
        }else{
            int nbr=0;
            int val=0;
            for(auto x:mp){
                if(nbr<x.second){
                    nbr=x.second;
                    val=x.first;
                }
            }
            int ans=0;
            for(int i=0;i<n;i++){
                if(tab[i]!=val){
                    ans++;
                }
            }
            cout<<ans<<endl;

        }
    }
}
