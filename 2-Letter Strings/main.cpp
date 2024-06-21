#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    string ch;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin >> ch;
        arr.push_back(ch);
    }

      for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
  }
}
