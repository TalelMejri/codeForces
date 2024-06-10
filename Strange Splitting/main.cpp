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
    if(arr.back()== arr.front()){
        cout<<"No"<<endl;
    }else{
        cout<<"YES"<<endl;
        string res="";
        for(int i=0;i<n;i++){
            res+="B";
        }
        res[1]='R';
        for (int i = 1; i < n; i++) {
                if (arr[i] != arr[n-1]) {
                    for (int j = 1; j <= i; j++) {
                        res[j] = 'R';
                    }
                    break;
                }
        }
        cout<<res<<endl;
    }
  }
  return 0;
}
