#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<int> tab;

    for(int i=0;i<4;i++){
        int x;
        cin>>x;
        tab.insert(x);
    }
    cout<<4-tab.size();
}
