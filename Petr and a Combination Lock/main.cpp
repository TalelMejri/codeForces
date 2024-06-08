#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
      cin>>arr[i];

    for(int i=0;i<(1<<n);i++){
        int ans=0;
        for(int j=0;j<n;j++){
            int bitmask=1<<j;
            int call=i&bitmask;
            if(call==0){
                ans+=arr[n-j-1];
            }else{
                ans-=arr[n-j-1];
            }
        }
        if(ans%360==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
