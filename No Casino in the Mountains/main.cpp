#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        vector<int> tab;
        cin>>n>>k;
         int x;
         int check=0;
         int ans=0;
        for(int i=0;i<n;i++){
              cin>>x;
              if(x==1){
                check++;
              }
              tab.push_back(x);
        }
        if(check==n){
            ans=0;
        }else{
           int verify=0;
           for(int i=0;i<tab.size();i++){
                if(tab[i]==0){
                    verify++;
                    if(verify==k){
                        ans++;
                        verify=0;
                        i++;
                    }
                }else{
                    verify=0;
                }
           }
    }
    cout<<ans<<endl;
}
}
