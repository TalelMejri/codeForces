#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        char tab[n][n];

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>tab[i][j];
            }
        }

          for (int i = 0; i < n; i+=k) {
            for (int j = 0; j < n; j+=k) {
                cout << tab[i][j];
            }
            cout << endl;
        }

    }
}
