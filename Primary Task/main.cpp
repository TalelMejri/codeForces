#include <bits/stdc++.h>

using namespace std;


bool isImportantInteger(string a) {
    if (a.size() > 2 && a.substr(0, 2) == "10") {
       if(a[2]=='0'){
        return false;
       }else{
            string ch = a.substr(2, a.size()-2);
            int test = stoi(ch);
            if(test >= 2){
               return true;
            }else{
                return false;
            }
       }
    }
    return false;
}

int main()
{
   int t;
   cin>>t;
   while(t--){
        string n;
        cin>>n;
         if (isImportantInteger(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
   }
}
