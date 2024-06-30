#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> team1(n);
  vector<int> team2(n);
  int a,b;
  for(int i=0;i<n;i++){
     cin>>team1[i]>>team2[i];
  }
   int ans=0;
   for(int i=0;i<n;i++){
     for(int j=0;j<n;j++){
        if(team1[i]==team2[j]){
            ans++;
        }
     }
  }
  cout<<ans<<endl;
}
