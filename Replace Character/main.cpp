#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string ch;
        int n;
        cin>>n;
        cin>>ch;
        string res="";
        res=ch;
        if(n==1){
            cout<<ch<<endl;;
        }else{
            map<char,int> tab;
            for(int i=0;i<n;i++){
                tab[ch[i]]++;
            }

            vector<pair<char, int>> sorted_tab(tab.begin(), tab.end());

            sort(sorted_tab.begin(), sorted_tab.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
                return a.second < b.second;
            });

            char min_freq_char = sorted_tab.front().first;
            char max_freq_char = sorted_tab.back().first;

            for (int i = 0; i < n; i++) {
                if (ch[i] == min_freq_char) {
                    ch[i] = max_freq_char;
                    break;
                }
            }
            cout<<ch<<endl;

        }
    }
}
