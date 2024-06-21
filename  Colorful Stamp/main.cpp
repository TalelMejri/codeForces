#include <iostream>

using namespace std;

int main()
{
   int n;
   string ch;
   int t;
   cin>>t;
   while(t--){
    cin>>n>>ch;

    int nb_red=0;
    int nb_blue=0;
    int nb_total=0;
    bool trouve=true;

    for(int i=0;i<ch.size();i++){
        if(ch[i]=='W'){
            if(nb_total){
                if(nb_blue==0 || nb_red==0){
                    trouve=false;
                }
                nb_total=0;
                nb_blue=0;
                nb_red=0;
            }
        }else {
            nb_red+=ch[i]=='R';
            nb_blue+=ch[i]=='B';
            nb_total++;
        }
    }
    if(nb_total){
         if(nb_blue==0 || nb_red==0){
                trouve=false;
          }
         nb_total=0;
         nb_blue=0;
         nb_red=0;
     }

    if(trouve){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
}
