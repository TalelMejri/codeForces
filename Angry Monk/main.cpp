#include <bits/stdc++.h>

using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(k);
        for(int i=0;i<k;i++){
            cin >> arr[i];
        }
        int ans=0;
        while (arr.size()>1) {
          for(int i=0;i<arr.size();i++){
              int indice=-1;
              int indice_1=-1;
              for(int j=0;j<arr.size();j++){
                if((arr[j]==1 && arr[j+1]!=1) ){
                     indice=1;
                     arr[j+1]+=1;
                     arr.erase( arr.begin() + j );
                     ans++;
                }else if((arr[j]==1 && arr[j-1]!=1)){
                     indice=1;
                     arr[j-1]+=1;
                     arr.erase( arr.begin() + j );
                     ans++;
                }
              }
              if(indice==-1){
                arr.push_back(1);
                arr[i]-=1;
                ans++;
              }
           }
           if(arr.size()==1){
            break;
           }

        }
        cout<<ans<<endl;

    }

}
