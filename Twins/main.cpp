#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    sum=sum/2;
    sort(arr.begin(),arr.end());
    int cnt=0;
    int ans=0;
    for(int i=n-1;i>=0;i--){
        ans+=arr[i];
        cnt++;
        if(ans>sum){
            break;
        }
    }
    cout<<cnt<<endl;

}
