#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int answers = 0;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (arr[0] == 0) {
            answers++;
        }
        if (n > 1 && arr[0] == arr[1]) {
            answers++;
        }

        long long sum = arr[0];
        int maxValue = arr[0];
        int maxIndex = 0;

        for (int i = 1; i < n; i++) {
            sum += arr[i];
            if (arr[i] > maxValue) {
                maxValue = arr[i];
                maxIndex = i;
            }

            if (i >= 2) {
                if (sum - arr[maxIndex] == maxValue) {
                    answers++;
                }
            }
        }

        cout << answers << endl;
    }
    return 0;
}
