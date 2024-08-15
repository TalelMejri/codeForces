#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string ch;
    cin>>ch;
    int i=0;
    int ones=0;
    int zeros=0;
    while(i<n){
        if(ch[i]=='1' ){
            ones++;
        }else{
        zeros++;}
        i++;
    }
    cout<<abs(ones-zeros)<<endl;

}
