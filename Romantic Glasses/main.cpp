#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> tab(n);
        map<ll,ll> mp;
        bool ans=false;
        mp[0] = 1;
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        ll s=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                s-=tab[i];
            }else{
                s+=tab[i];
            }

            if(mp[s]){
                ans=true;
                break;
            }
            mp[s]++;

        }
        if(ans){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

}
