#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        map<int,int> occ;
        int n;
        cin>>n;
        vector<int> nbr(n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ++occ[x];
            nbr.push_back(x);
        }
        int maxi=-1;
        for(int i=0;i<nbr.size();i++){
            if(occ[nbr[i]]>=3){
               maxi=nbr[i];
            }
        }
        cout<<maxi<<endl;
    }
}
