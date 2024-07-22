#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string ch;
    cin>>ch;
    int ans=0;
    int count11 = 0;

    for (size_t i = 0; i < ch.size() ; i++) {
        if (ch[i] == '1' && ch[i + 1] == '1') {
            count11++;
        }
    }

     for (size_t i = 0; i < ch.size() ; i++) {
            if (ch[i] == '1' && ch[i + 1] == '1' && ch[i + 2] == '1') {
                ans = 1;
                break;
            }
    }

    if (count11 >= 2 || (ch[0] == '1' && ch[ch.size() - 1] == '1')) {
            ans = 1;
    }

     if ( count11  >= 1 && (ch[0] == '1' || ch[ch.size() - 1] == '1')){
            ans=1;
     }


    if(ans){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   }
}
