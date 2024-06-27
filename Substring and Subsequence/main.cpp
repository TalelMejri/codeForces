#include <bits/stdc++.h>

using namespace std;


int main()
{
     int t;
     cin>>t;
     while(t--){
       string a,b;
        cin>>a>>b;
        int n=a.size(),m=b.size();
        int lon=0;
        for(int x=0;x<m;x++){
        int j=x;
        int c=0;
        for(int i=0;i<n;i++){
            if(a[i]==b[j]) c++,j++;
        }
        lon=max(lon,c);
    }
        cout<<n+(m-lon)<<"\n";
     }
}
