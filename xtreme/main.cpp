#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
       long long a,b,c,d;
       cin>>a>>b;
       cin>>c>>d;
       if(a==b && a==0){
         cout<<"0"<<endl;
       }else if(a==b && a>0){
          cout<<a*d<<endl;
       }else if(a==0 && b!=0){
          cout<<b*c<<endl;
       }else if(a!=0 && b==0){
          cout<<a*c<<endl;
       }else if(a!=0 && b!=0){
            long long ans=0;
            long long minimum=0;
            if(a>b){
                ans+=(a-b)*c;
                minimum=b;
            }else if(b>a){
                ans+=(b-a)*c;
                minimum=a;
            }
            ans+=minimum*d;
            cout<<ans<<endl;
            ans=0;
       }
   }
}
