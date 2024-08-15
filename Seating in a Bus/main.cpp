#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        vector<int> tab(n);

        for(int i=0;i<n;i++){
            cin>>tab[i];
        }

        if(n>1){

            int trouve=false;
            for(int i=1;i<n;i++){
                int test=false;
                auto it = find(tab.begin(), tab.begin() + i, tab[i] + 1);
                if (it != tab.begin() + i) {
                    test = true;
                } else {
                    it = find(tab.begin(), tab.begin() + i, tab[i] - 1);
                    if (it != tab.begin() + i) {
                        test = true;
                    }
                }
                if(test){
                    trouve=true;
                }else{
                    trouve=false;
                    break;
                }
            }

            if(trouve){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }else{
             cout<<"YES"<<endl;
        }

    }
}
