#include <bits/stdc++.h>

using namespace std;

int main()
{
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int m[n];
        map<int,int> pos;
        for(int i=0;i<n;i++){
            cin>>m[i];
        }
        int curss=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            curss+=m[i];
            pos[curss]=(n-i);
        }
        int sum=0;
        for(int i=0;i<n;i++){
            pos[curss]=-1;
            sum+=m[i];
            if(pos[sum]>0){
                ans=max(ans,pos[sum]+(i+1));
            }
            curss-=m[i];
        }
        cout<<ans<<endl;
     }

}
