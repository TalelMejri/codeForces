#include <iostream>

using namespace std;

int main()
{
   int n,m;
   cin>>n>>m;
   if(m==1 || n==1){
        cout<<"Akshat";
   }else{
       int ans= min(n,m);
       if(ans%2==0){
         cout<<"Malvika";
       }else{
         cout<<"Akshat";
       }
   }
}
