#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     string ch;
     cin>>ch;
     int ans=0;
     for(size_t i=0; i<ch.size(); i++){
        ans += ch[i] - '0';
     }
     cout<<ans<<endl;
   }
}
