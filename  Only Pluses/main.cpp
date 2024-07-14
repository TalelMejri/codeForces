#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int a,b,c;
    cin>>a>>b>>c;

    int maximum=max(c,max(a,b));
    int need_a=maximum-a;
    int need_b=maximum-b;
    int need_c=maximum-c;

    for(int i=0;i<5;i++){
        if(need_a>0 && a<=maximum){
            a++;
        }
        if(need_b>0 && b<=maximum){
            b++;
        }
        if(need_c>0 && c<=maximum){
            c++;
        }
    }

    cout<<a<<" "<<b<<" "<<c<<endl;

   // cout<<a*b*c<<endl;
   }
}
