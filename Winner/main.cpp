#include <bits/stdc++.h>

using namespace std;

int main()
{

    map<string,int>mp;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string ch;
        int x;
        cin>>ch;
        cin>>x;
        mp[ch]+=x;
    }
    string maxKey = "";
    int maxValue = INT_MIN;

    for (const auto& pair : mp)
    {
        if (pair.second > maxValue)
        {
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }
     cout << maxKey << endl;

}
