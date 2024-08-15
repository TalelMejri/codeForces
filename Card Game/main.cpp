#include <bits/stdc++.h>

using namespace std;

int compared(int a,int b){
    if (a > b) return 1;
    if (a == b) return 0;
    if (a < b) return -1;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
     int a,b,c,d;
     cin>>a>>b>>c>>d;
     int ans=0;
     if(compared(a,c) + compared(b,d) > 0) ans++;
     if(compared(a,d) + compared(b,c) > 0) ans++;
     if(compared(b,c) + compared(a,d) > 0) ans++;
     if(compared(b,d) + compared(a,c) > 0) ans++;
     cout<<ans<<endl;
   }
}
