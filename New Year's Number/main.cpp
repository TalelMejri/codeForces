#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     int n;
     cin>>n;
     int cmpt2021=n%2020;
     int cmpt2020=(n-cmpt2021)/2020-cmpt2021;
     if (cmpt2020 >= 0 && 2020 * cmpt2020 + 2021 * cmpt2021 == n) {
        cout<<"YES"<<endl;
     }else{
        cout<<"NO"<<endl;
     }
   }
}
