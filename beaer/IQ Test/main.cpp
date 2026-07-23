#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<vector<char>> matrix(4, vector<char>(4));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] == matrix[i + 1][j] &&
                matrix[i + 1][j] == matrix[i][j + 1]) {
                cout << "YES";
                return 0;
            }
            if (matrix[i][j] == matrix[i + 1][j] &&
                matrix[i + 1][j] == matrix[i + 1][j + 1]) {
                cout << "YES";
                return 0;
            }
            if (matrix[i][j] == matrix[i][j + 1] &&
                matrix[i][j + 1] == matrix[i + 1][j + 1]) {
                cout << "YES";
                return 0;
            }
            if (matrix[i + 1][j] == matrix[i][j + 1] &&
                matrix[i][j + 1] == matrix[i + 1][j + 1]) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
