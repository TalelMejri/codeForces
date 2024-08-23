#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (count(s.begin(), s.end(), '0') == 0) {
            cout << "0" << endl;
            continue;
        }


        if (count(s.begin(), s.end(), '1') == 0) {
            cout << "1" << endl;
            continue;
        }

        int zero_segments = 0;
        bool in_zero_segment = false;
        for (auto c : s) {
            if (c == '0' && !in_zero_segment) {
                zero_segments++;
                in_zero_segment = true;
            } else if (c == '1') {
                in_zero_segment = false;
            }
        }

        if (zero_segments > 1) {
            cout << "2" << endl;
        } else {
            cout << "1" << endl;
        }
    }
}
