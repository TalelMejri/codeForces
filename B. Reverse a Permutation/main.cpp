#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        bool done = false;
        for (int i = 0; i < n && !done; i++) {
            int mx = p[i];
            int pos = i;
            for (int j = i; j < n; j++) {
                if (p[j] > mx) {
                    mx = p[j];
                    pos = j;
                }
            }
            if (mx > p[i]) {
                reverse(p.begin() + i, p.begin() + pos + 1);
                done = true;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout<<endl;
    }
    return 0;
}
