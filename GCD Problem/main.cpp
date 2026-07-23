#include <bits/stdc++.h>
    using namespace std;

    int main()
    {
       int t;
       cin>>t;
       while(t--){
              long long n;
              cin>>n;
              if(n==1ll){
                cout<<"NO"<<endl;
                continue;
              }
              long long x=sqrtl(n);
              if(x*x!=n){
                    cout<<"NO"<<endl;
                    continue;
              }
              bool ok=0;
              for(long long i=2;i<x;i++){
                    if(n%i==0){
                       cout<<"NO"<<endl;
                       ok=1;
                        break;
                    }

              }
              if(!ok) cout<<"YES"<<endl;
           }
       }

