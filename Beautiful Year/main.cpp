#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std;

string int_to_string(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int testDistinct(string ch){
   set<char> distinctCahr;
   for(int i=0;i<ch.size();i++){
    distinctCahr.insert(ch[i]);
   }
   if(distinctCahr.size()==ch.size()){
        return 1;
   }else{
        return -1;
   }
}

int main()
{
   int n;
   cin>>n;
   n++;
   while(testDistinct(int_to_string(n))==-1){
      n++;
   }
   cout<<n;
}
