#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<int> ans(n);
        ans[n-1] = max(a[n-1], b[n-1]);

        for (int i = n-2; i >= 0; i--) {
            int mx=max(a[i],ans[i+1]);
            ans[i] =max( b[i],mx );
        }

        vector<long long> acumm(n+1, 0);
        for (int i = 0; i < n; i++) {
            acumm[i+1] = acumm[i] + ans[i];
        }

        while (q--) {
            int l, r;
            cin >> l >> r;
            long long sum = acumm[r] - acumm[l-1];
            cout << sum << " ";
        }
        cout << endl;
    }
}
