#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> tab(n);
        long long  ods=0,evs=0;
        for(int i=0;i<n;i++){
            cin>>tab[i];
            if(i%2==1){
                    ods+=tab[i];
            }else{
                    evs+=tab[i];
            }
        }

        long long odc=n/2,evc=n/2;

        if(n%2==1){
            evc++;
        }

        if(ods%odc==0 && evs%evc==0 && (ods/odc)==(evs/evc)){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }

    }

}
