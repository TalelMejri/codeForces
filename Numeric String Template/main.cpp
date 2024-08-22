#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> tab(n);

        for (int i = 0; i < n; i++) {
            cin >> tab[i];
        }

        int m;
        cin >> m;

        for (int i = 0; i < m; i++) {
          string ch;
          cin>>ch;
          if(ch.size()!=n){
            cout<<"NO"<<endl;
            continue;
          }else{

            map<char,vector<int>> check;
            for(int i=0;i<ch.size();i++){
                check[ch[i]].push_back(i);
            }

            bool test=true;
            for(auto it:check){
                for(int j=0;j<it.second.size()-1;j++){
                        if(tab[it.second[j]]!=tab[it.second[j+1]]){
                            test=false;
                        }

                }
            }

            if(!test){
                cout<<"NO"<<endl;
                continue;
            }

            map<int,vector<int>> check2;
            for(int i=0;i<n;i++){
                check2[tab[i]].push_back(i);
            }

            for(auto it:check2){
                for(int j=0;j<it.second.size()-1;j++){
                        if(ch[it.second[j]]!=ch[it.second[j+1]]){
                            test=false;
                        }
                }
            }

            if(test){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

          }
        }
    }
}
