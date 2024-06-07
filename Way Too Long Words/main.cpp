#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string int_to_string(int num) {
    stringstream ss;
    ss << num;
    return ss.str();
}

string ReplaceChaine(string s) {
    int num_in_between = s.length() - 2;
    string result = s[0] + int_to_string(num_in_between) + s[s.length() - 1];
    return result;
}

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        string chaine;
        cin >> chaine;
        if (chaine.length() > 10) {
            cout << ReplaceChaine(chaine) << endl;
        } else {
            cout << chaine << endl;
        }
    }
    return 0;
}
