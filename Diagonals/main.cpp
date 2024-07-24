#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
        ll  n,k;
        cin>>n>>k;
        map<ll,ll> arr;
        vector<ll> tab;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                arr[i+j]++;
            }
        }
        for(auto it:arr){
            tab.push_back(it.second);
        }
        sort(tab.rbegin(),tab.rend());
        int ans=0;
        int i=0;
        while(k>0)
        {
            k-=tab[i];
            i++;
            ans++;
        }
        cout<<ans<<endl;
  }

}

