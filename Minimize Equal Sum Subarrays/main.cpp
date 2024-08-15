#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;

        vector<int> p(n);
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
        }

       int first=p[0];

        for (int i = 0; i < n-1; ++i) {
          p[i]=p[i+1];
        }

        p[n-1]=first;

        for (int i = 0; i < n; ++i) {
           cout<<p[i]<<" ";
        }

        cout << endl;

    }

    return 0;
}
