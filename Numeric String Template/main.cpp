#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> tab(n);

        for (int i = 0; i < n; i++) {
            cin >> tab[i];
        }

        int m;
        cin >> m;
        vector<string> tabChar(m);
        for (int i = 0; i < m; i++) {
            cin >> tabChar[i];
        }

        for (int i = 0; i < m; i++) {
           if (tabChar[i].length() < static_cast<size_t>(n)) {
                cout << "NO" << endl;
            } else {
                bool ans = true;
                for (int j = 0; j < n; j++) {
                    char test = tabChar[i][j];
                    int indice = tab[j];
                    for (int l = i; l < m; l++) {
                        if (tabChar[l][j] == test) {
                            if (indice != tab[l]) {
                                ans = false;
                                break;
                            }
                        }
                    }
                }
                cout << (ans ? "YES" : "NO") << endl;
            }
        }
    }
}
