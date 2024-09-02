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
        if(n%2==0){
            cout<<"-1"<<" ";
        }else{
            iota(tab.begin(),tab.end(),1);
            for(int i=1;i<n;i+=2){
                swap(tab[i],tab[i+1]);
            }
            for(int i=0;i<n;i++){
                cout<<tab[i]<<" ";
            }
        }
        cout<<endl;
    }
}
