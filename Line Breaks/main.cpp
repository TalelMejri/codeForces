#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string ch;
        int n, m;
        cin >> n >> m;
        int ans = 0;
        vector<string> tab(n);
        for(int i=0;i<n;i++){
            cin>>tab[i];
        }
        for (int i = 0; i < n; i++) {
            int test=m-tab[i].size();
            if (test>=0) {
                m -= tab[i].size();
                ans++;
            }else{
                break;
            }
        }
        cout << ans << endl;
    }
}
