#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   int a,b,c,resultat=0;
   while(t--){
    cin>>a>>b>>c;
    resultat+=a+b+c > 1 ? 1 : 0;
   }
   cout<<resultat<<endl;
   return 0;
}
