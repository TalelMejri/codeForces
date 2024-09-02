#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        int ans = 0;

        while (true) {
            bool changed = false;
            for (int i = 0; i < k - 1; i++) {
                if (s[i] == 'A' && s[i + 1] == 'P') {
                    s[i + 1] = 'A';
                    changed = true;
                    i++;
                }
            }

            if (!changed) {
                break;
            }

            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
