#include <bits/stdc++.h>

using namespace std;

int main()
{
  map<string,int> mp;
  int n;
  cin>>n;
  string s;
  for(int i=0;i<n;i++){
    cin>>s;
    if(mp.find(s)!=mp.end()){
        cout<<s<<mp[s]<<endl;
        mp[s]++;
    }else{
        cout<<"OK"<<endl;
        mp[s]=1;
    }
  }
}
