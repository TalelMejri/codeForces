#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    set<int> tab;
    while(t--){
        int n;
        cin>>n;
         vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
            tab.insert(arr[i]);
        }
        if(tab.size()==n){
            cout<<"-1"<<endl;
        }else{
            int i=0;
            int j=0;
            int index=0;
            int compt=0;
            while(i<arr.size()){
                index=0;
                compt=0;
                int j=0;
                while(j<arr.size()){
                    if(arr[i]==arr[j]){
                        compt++;
                    }
                    j++;
                }
                if(compt>=3){
                    index=i;
                    break;
                }else{
                    i++;
                }
            }
            cout<<arr[index]<<endl;
        }
    }
}
