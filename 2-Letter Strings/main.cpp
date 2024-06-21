#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string ch;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int nb=0;
    for(int i=0;i<arr.size();i++){
          string test=arr[i];
          for(int j=i+1;j<arr.size();j++){
                if( (test[0]==arr[j][0] && test[1]!=arr[j][1]) ||  (test[1]==arr[j][1] && test[0]!=arr[j][0])){
                    nb++;
                }
        }
    }
    cout<<nb<<endl;
  }
}
