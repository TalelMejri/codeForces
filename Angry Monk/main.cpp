#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(k);
        for(int i=0;i<k;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans=0;
        int sum=0;
        for(int i=0;i<k-1;i++){
            if(arr[i]==1){
                ans++;
                continue;
            }
            ans+=arr[i];
            sum+=arr[i]-1;
        }
        cout<<ans+sum<<endl;
    }
}
