#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;

  while(t--){
    int n;
    cin>> n;

    vector<string>a(n);

    map<string,int> mp;
    map<char,int> first , second ;

    long long ans =  0 ;
    for(int i  = 0 ; i<n;i++)
    {
       cin>>a[i] ;

       mp[a[i]]++;
       first[a[i][0]]++;
       second[a[i][1]]++;
       ans+=   (first[a[i][0]] +  second[a[i][1]])-2*(mp[a[i]]);

    }
    cout<<ans<<endl;
  }
}
