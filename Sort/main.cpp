#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string a;
        string b;
        cin>>a;
        cin>>b;
        vector<pair<int,int>> queries(q);

        for(int i=0;i<q;i++){
            cin>>queries[i].first>>queries[i].second;
        }

        for(int i=0;i<q;i++){
            int ans=0;
            int left = queries[i].first - 1;
            int right = queries[i].second - 1;

            string sub_a = a.substr(left, right - left + 1);
            string sub_b = b.substr(left, right - left + 1);

            sort(sub_a.begin(), sub_a.end());
            sort(sub_b.begin(), sub_b.end());

            for (int x = left; x <= right; x++) {
                int trouve=0;
                for(int j=left;j<=right;j++){
                    if(sub_a[x]==sub_b[j]){
                        trouve=1;
                    }
                }
                if(trouve==0){
                    ans++;
                }
            }
            cout<<ans<<endl;
        }

    }
}
