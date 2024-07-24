#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int sum1=0,sum2=0;
        for(int i=0;i<6;i++){
            if(i<=2){
                sum1+= n[i] - '0' ;
            }else{
                sum2+= n[i] - '0';
            }
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
