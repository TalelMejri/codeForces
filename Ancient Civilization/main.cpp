#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--){
        int n,l;
        cin>>n>>l;

        map<int,int>ones,zeroes;

        vector<int> tab(n);

        for(int i=0;i<n;i++){
            cin>>tab[i];
        }

        int ans=0;

        for(int i=0;i<l;i++){
            for(int j=0;j<n;j++){
                if(tab[j] & (1<<i)){
                    ones[i]++;
                }else{
                    zeroes[i]++;
                }
            }
        }

        for(int i=0;i<l;i++)
        {
            if(ones[i]>zeroes[i]){
                ans+=pow(2,i);
            }
        }

        cout<<ans<<endl;
    }
}
