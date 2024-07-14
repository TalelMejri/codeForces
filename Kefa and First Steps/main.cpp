
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    vector<int> maximum;

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    if(arr.size()==1){
        cout<<"1"<<endl;
    }else{
    int ans=1;
    int c=0;
    for(int i=1;i<n;i++){
       if(arr[i]>=arr[i-1])
        {
           ans++;
        }
        else {
           c=max(c,ans);
            ans=1;
        }
    }
    c=max(c,ans);
    cout<<c;
    }


}
