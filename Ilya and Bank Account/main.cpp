#include <bits/stdc++.h>


using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n<0){
        string sn = to_string(n);
        sn = sn.substr(0, sn.length() - 2);
        sn = sn + to_string(min(abs((n / 10) % 10), abs(n % 10)));
        cout << (sn == "-0" ? 0 : stoi(sn));
    }else{
        cout<<n;
    }

}
