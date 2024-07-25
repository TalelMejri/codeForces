#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mini=max(arr[0],arr[1]);
        for(int i=1;i<n-1;i++){
            mini=min(mini,max(arr[i],arr[i+1]));
        }
        cout<<mini-1<<endl;
    }
}
