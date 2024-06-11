#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  vector<int> person(n);

  for(int i=0;i<n;i++){
    cin>>person[i];
  }

  for(int i=0;i<person.size();i++){
    if(person[i]==1){
        cout<<"HARD";
        return 0;
    }
  }
  cout<<"EASY";
  return 0;
}
