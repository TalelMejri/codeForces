#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,somme=0;
    cin>>n>>k;
    vector<int> tab(51);
    for(int i=0;i<n;i++){
        cin>>tab[i];
    }

    for(int i=0;i<n;i++){
        if(tab[i]>0 && tab[i]>=tab[k-1]){
            somme+=1;
        }
    }

    cout<<somme<<endl;

}
