#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> tab_idelrs(n);
    vector<int> tab_jobs(n);


    for(int i=0;i<n;i++){
        cin>>tab_idelrs[i];
    }

    for(int i=0;i<n;i++){
        cin>>tab_jobs[i];
    }

    map<int,vector<int>> mp;
    for(int i=0;i<n;i++){
        mp[tab_idelrs[i]].push_back(tab_jobs[i]);
    }

    vector<int> ans;

    for(auto tab:mp){
        if(tab.second.size()>1){
            sort(tab.second.begin(),tab.second.end());
            for(size_t i=0;i<tab.second.size()-1;i++){
                ans.push_back(tab.second[i]);
            }
        }
        k--;
    }

    sort(ans.begin(),ans.end());

    long long res=0;

    for(int i=0;i<k;i++){
        res+=ans[i];
    }

    cout<<res<<endl;

}
