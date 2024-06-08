#include <bits/stdc++.h>

using namespace std;

int main()
{
   string ch;
   cin>>ch;
   set<char> distinctCahr;
   for(int i=0;i<ch.size();i++){
    distinctCahr.insert(ch[i]);
   }

   if(distinctCahr.size()%2==0){
    cout<<"CHAT WITH HER!";
   }else{
    cout<<"IGNORE HIM!";
   }
}
