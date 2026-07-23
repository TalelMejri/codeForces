#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin>>n>>q;
    vector<long> tab(n);
    vector<long long> pref(n+1,0);

    for(int i=0;i<n;i++){
        cin>>tab[i];
    }

    sort(tab.begin(),tab.end());

    for(int i=1;i<=n;i++){
        pref[i]+=pref[i-1]+tab[i-1];
    }

    for(int i=0;i<q;i++){
        int x,y;
        cin>>x>>y;
        long long ans=pref[n-x+y]-pref[n-x];
        cout<<ans<<endl;
    }

}
