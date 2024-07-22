#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    int arr[n+1]{};

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]++;
    }
    int trouve=0;
    for(int i=1;i<=n;i++){
        if(arr[i]%2==1){
           trouve=1;
        }
    }
    if(trouve){
         cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

   }
}
