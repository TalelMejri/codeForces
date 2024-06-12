#include <iostream>

using namespace std;

int main()
{
   string nbr1;
   string nbr2;
   cin>>nbr1;
   cin>>nbr2;
   string res="";
   for(int i=0;i<nbr1.size();i++){
        if((nbr1[i]=='1' && nbr2[i]=='1') || (nbr1[i]=='0' && nbr2[i]=='0')){
            res+='0';
        }else{
            res+='1';
        }
   }
   cout<<res;
}
