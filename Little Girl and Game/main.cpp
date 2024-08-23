#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   map<char,int> mp;
   for(size_t i=0;i<s.length();i++){
      mp[s[i]]++;
   }

   int ans=0;
   for(auto x:mp){
    if(x.second&1){
        ans++;
    }
   }

   if(s.length()%2==1 || (s.length()%2==0 && ans==0)){
    cout<<"First"<<endl;
   }else{
    cout<<"Second"<<endl;
   }

}
