#include <iostream>
using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
         int n,k;
         cin>>n>>k;
         char x;
         int nbr_zero=0;
         int nbr_ones=0;
         for(int i=0;i<n;i++){
            cin>>x;
            if(x=='0'){
                nbr_zero++;
            }else{
                nbr_ones++;
            }
         }
         int ans=abs(nbr_ones-nbr_zero)/2;
         if(ans>k){
            cout<<"NO"<<endl;
         }else if((k-ans)%2==0){
            cout<<"YES"<<endl;
         }else{
             cout<<"NO"<<endl;
         }
     }
}
