#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> tab(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        sort(tab.rbegin(),tab.rend());
        long long somme=0;
        for(int i=0;i<n;i++){
            somme+=tab[i];
            if(somme>k){
                somme-=tab[i];
                break;
            }
        }
        cout<<k-somme<<endl;
   }
}
