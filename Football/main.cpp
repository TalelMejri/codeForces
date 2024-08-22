#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;

  map<string,int> tab;

  for(int i=0;i<n;i++){
    string ch;
    cin>>ch;
    tab[ch]++;
  }

  string winner="";
  int nbr=0;

  for(auto x:tab){
     if(x.second>nbr){
        nbr=x.second;
        winner=x.first;
     }
  }
  cout<<winner;
}
