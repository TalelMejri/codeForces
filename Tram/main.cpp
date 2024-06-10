#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a,b;
   int res=0;
   vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        res=(res-a)+b;
        arr.push_back(res);
    }
    sort(arr.begin(), arr.end());

    cout<<arr[arr.size()-1];
}
