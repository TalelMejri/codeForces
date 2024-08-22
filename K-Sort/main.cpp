#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int> tab(n);

    for(int i=0;i<n;i++){
        cin>>tab[i];
    }

    long long maximum = 0, s = 0, mx = 0;
    for(int i=0;i<n;i++){
        maximum = max(maximum,  (long long) tab[i]);
        long long d = maximum - tab[i];
        s += d;
        mx = max(mx, d);
    }

    cout << s + mx <<endl;

   }
}
