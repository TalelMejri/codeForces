#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ch1,ch2;
    cin>>ch1>>ch2;
    int res=0;
    for(int i=0;i<ch1.size();i++){
        res=tolower(ch1[i])-tolower(ch2[i]);//to lower give code Ascii
        if(res){
            break;
        }
    }

    if(res>0){
        cout<<"1";
    }else if(res<0){
        cout<<"-1";
    }else{
        cout<<"0";
    }
}
