#include <bits/stdc++.h>

using namespace std;

int main()
{
    string chaine;
    cin>>chaine;
    int minuscule=0,majuscule=0;
    for(int i=0;i<chaine.size();i++){
        if(chaine[i]>=65 && chaine[i]<=90){
            majuscule++;
        }else if(chaine[i]>=97 && chaine[i]<=122){
            minuscule++;
        }
    }

    if(minuscule<majuscule){
   for(int i=0;i<chaine.size();i++){
           chaine[i]=toupper(chaine[i]);
        }
    }else{
          for(int i=0;i<chaine.size();i++){
         chaine[i]=tolower(chaine[i]);
    }
    }
     cout<<chaine;
    return 0;
}
