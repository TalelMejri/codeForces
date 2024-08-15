#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;
        vector<pair<int, int>> tab(n);
        for (int i = 0; i < n; i++) {
            cin >> tab[i].first >> tab[i].second;
        }
        if ((tab[0].first - 0) >= s) {
            cout << "YES" << endl;
        } else {
            int test = 0;
            for (int i = 0; i <n; i++) {
                if(i+1==n){
                      if ( (m - tab[i].second) >= s) {
                    test = 1;
                }
                }else{
                    if ( (tab[i+1].first - tab[i].second) >= s) {
                    test = 1;
                }
                }

               }

            if (test == 1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
}
