#include <bits/stdc++.h>
using namespace std;

int opt(int a, int b, char op) {
    if (op == '+')
        return a + b;
    else if (op == '-')
        return a - b;
    else if (op == '*')
        return a * b;
    else
        return a / b;
}

int main() {
    int t;
    cin >> t;

    vector<string> v(t);

    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }

    stack<int> s;

    for (int i = 0; i < t; i++) {
        if (v[i] == "+" || v[i] == "-" || v[i] == "*" || v[i] == "/") {

            int b = s.top();
            s.pop();

            int a = s.top();
            s.pop();

            int res = opt(a, b, v[i][0]);
            s.push(res);

        } else {
            s.push(atoi(v[i].c_str()));
        }
    }

    cout << s.top() << endl;

    return 0;
}
