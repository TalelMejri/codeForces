#include <bits/stdc++.h>
#include <string>
#include <sstream>

using namespace std;

string int_to_string(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int testNumber(string test){
    for(int i=test.size()-1;i>=0;i--){
        if(test[i]!='5' && test[i]!='6' && test[i]!='7' && test[i]!='8' && test[i]!='9'){
            return i;
        }
    }
    return -1;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
    long long n;
    cin>>n;
    long long res=n/2;
    string ch=int_to_string(res);
    if(testNumber(int_to_string(res))==-1){
       long long res2=n-res;
       if(testNumber(int_to_string(res2))==-1) {
            cout<<"YES"<<endl;
       }else{
            cout<<"NO"<<endl;
        }
    }else{
     res+=5*pow(10,ch.size()-testNumber(ch)-1);
     long long res2=n-res;
     if(testNumber(int_to_string(res2))==-1 && testNumber(int_to_string(res))==-1){
            cout<<"YES"<<endl;
     }else{
            cout<<"NO"<<endl;
     }
    }
   }
  return 0;
}
