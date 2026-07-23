#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
        int n,s,x;
        cin>>n>>s>>x;
        int somme=0;
        for(int i=0;i<n;i++){
            int r;
            cin>>r;
            somme+=r;
        }

        int test=false;
        if(somme==s){
            test=true;
        }else if(somme<s && x==1){
            test=true;
        }else{
            if(somme>s){
                test=false;
            }else{
                int res=s-somme;
                test=(res%x==0);
            }
        }
        if(test){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
     }
}
