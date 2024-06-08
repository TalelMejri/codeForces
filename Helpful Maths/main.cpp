#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

string int_to_string(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

int main()
{
   string sum;
   cin>>sum;

   vector<int> arr;
   for(int i=0;i<sum.size();i+=2){
        arr.push_back(sum[i] - '0');
   }

   sort(arr.begin(),arr.end());

   string res;
   for(int i=0;i<arr.size();i++){
        res+=int_to_string(arr[i]);
        if (i < arr.size() - 1) {
            res += '+';
        }
   }

    cout<<res<<endl;
    return 0;
}
