#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){

    vector<int> arr(3);

    for(int i=0;i<3;i++){
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());

    for(int i=0;i<5;i++){
        arr[0]++;
        sort(arr.begin(),arr.end());
   }

    cout<<arr[0]*arr[1]*arr[2]<<endl;

   }
}
