#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int maxSum = 0;
        int bestX = 2;

        for (int i = 2; i <= n; i++) {
            int k = n / i;
            int sum = i * k * (k + 1) / 2;
            if (sum > maxSum) {
                maxSum = sum;
                bestX = i;
            }
        }

        cout << bestX << endl;
    }
    return 0;
}
