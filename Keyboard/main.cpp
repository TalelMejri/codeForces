#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> keyboard = {
        "qwertyuiop",
        "asdfghjkl;",
        "zxcvbnm,./"
    };

    char direction;
    string ch;
    cin>>direction;
    cin>>ch;
    string message="";
    for (size_t j = 0; j < ch.size(); j++) {
     for (size_t i = 0; i < keyboard.size(); i++) {
        int index = keyboard[i].find(ch[j]);
        if (index != -1) {
            if (direction == 'R') {
                message += keyboard[i][index - 1];
            } else {
                message += keyboard[i][index + 1];
            }
            break;
        }
     }
   }

    cout<<message<<endl;

}
