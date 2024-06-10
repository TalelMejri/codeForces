#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int sum=0;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0;i<arr.size();i++){
        sum+=arr[i]<=h ? 1 : 2;
    }
    cout<<sum;
    return 0;
}
