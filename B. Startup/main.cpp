#include <bits/stdc++.h>

using namespace std;


void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> tab(k,0);
    for(int i=0;i<k;i++){
        int a,c;
        cin>>a>>c;
        tab[a-1]+=c;
    }
    sort(tab.rbegin(),tab.rend());
    int ans=0;
    for(int i=0;i<min(n,k);i++){
        ans+=tab[i];
    }
    cout<<ans<<endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
