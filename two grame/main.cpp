#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int c;
    cin >> c;
    string ch;
    cin >> ch;

    map<string,int> res;

    for (int i = 0; i < c - 1; i++) {
        for (int j = i + 1; j < c - 1; j++) {
            if (ch[i] == ch[j] && ch[i + 1] == ch[j + 1]) {
                string test="";
                test+= ch[i] ;
                test+= ch[i+1];
                res[test]++;
            }
        }
    }

    vector<pair<string, int>> sorted_res(res.begin(), res.end());

    sort(sorted_res.begin(), sorted_res.end(), [](const pair<string, int>& a, const pair<string, int>& b) {
        return a.second > b.second;
    });

    if (!sorted_res.empty()) {
        cout << sorted_res[0].first << endl;
    }else{
       cout<<ch[0]<<ch[1]<<endl;
    }

    return 0;
}
