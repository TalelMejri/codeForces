#include <bits/stdc++.h>

using namespace std;

int testValid(char c,string ch){
    int trouve=-1;
    for(int i=0;i<ch.size();i++){
        if(c==ch[i]){
            trouve=i;
        }
    }
    return trouve;
}


int main()
{
     int t;
     cin>>t;
     while(t--){
        string ch1,ch2;
        cin>>ch1>>ch2;
        int l=0;
        int test=ch1.size()>ch2.size() ?  1 : 0;
        if(test){
                for(int j=0;j<ch2.size();j++){
                    if(testValid(ch2[j],ch1)==-1){
                        l++;
                    }
                }
            cout<<ch1.size()+l<<endl;
        }else{
                for(int j=0;j<ch1.size();j++){
                    if(testValid(ch1[j],ch2)==-1){
                            l++;
                    }
                }

            cout<<ch2.size()+l<<endl;
        }
     }
}
