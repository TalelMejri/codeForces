#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     string ch;
     cin>>ch;
     int ans=0;
     for(size_t i=0;i<ch.size();i++){
        if(ch[i]=='p' && i+1<ch.size() && ch[i+1]=='i' && i+2<ch.size() && ch[i+2]=='e'){
            ans++;
            ch[i+2]='u';
            continue;
        }
        if(ch[i]=='m'&& i+1<ch.size() &&  ch[i+1]=='a'&& i+2<ch.size() && ch[i+2]=='p'){
            ans++;
            ch[i+2]='k';
              continue;
        }
     }
     cout<<ans<<endl;
   }
}
