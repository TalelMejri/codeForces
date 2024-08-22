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

        int maximum=0;
        for(int i=0;i<n;i+=2){
            if(maximum<tab[i]){
              maximum=tab[i];
            }
        }

        cout<<maximum<<endl;
    }
}
