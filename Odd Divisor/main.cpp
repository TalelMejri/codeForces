#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     long long n;
     cin>>n;
     if(n%2==1){
        cout<<"YES"<<endl;
     }else{
        bool test=false;
        long long div=n;
        while(div>2){
            div/=2;
            if(div%2==1){
                if(n%div==0){
                    test=true;
                    break;
                }
            }
        }
        if(test==true){
        cout<<"YES"<<endl;

        }else{
        cout<<"NO"<<endl;

        }

     }
   }
}
