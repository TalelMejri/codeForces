#include <iostream>

using namespace std;

int main()
{
  int nb=0,stone;
  string chaine;
  cin>>stone;
  cin>>chaine;
  for(int i=0;i<stone;i++){
    if(chaine[i]==chaine[i-1]){
        nb++;
    }
  }
  cout<<nb;
}
