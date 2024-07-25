#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        pair<int,int> ab[n];
        for(int i = 0;i < n;++i)
        {
            cin >> ab[i].first;
        }
        for(int i = 0;i < n;++i)
        {
            cin >> ab[i].second;
        }
        sort(ab,ab+n);
        for(int i = 0;i < n;++i)
        {
            cout << ab[i].first << ' ';
        }
        cout <<endl;
        for(int i = 0;i < n;++i)
        {
            cout << ab[i].second << ' ';
        }
        cout <<endl;

    }
}
