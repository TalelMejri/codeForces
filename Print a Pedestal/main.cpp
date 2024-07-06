#include <iostream>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int x=n/3;
        int h1=x,h2=x,h3=x;
        while(h1+h2+h3<n){
            h2++;
        }
        while(h1<=h3){
            h1++;
            h3--;
        }
        while(h1==h2){
            h2++;
            h3--;
        }
        while(h2<h1){
            h2++;
            h1--;
        }
        if(h3==0){
            h3++;
            h1--;
        }

        cout<<h1<<" "<<h2<<" "<<h3<<endl;;
     }
}
