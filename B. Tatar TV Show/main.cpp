#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string ch;
        cin >> ch;

        bool ok = true;

        for(int start = 0; start < k; start++)
        {
            int cnt = 0;

            for(int j = start; j < n; j += k)
            {
                if(ch[j] == '1')
                    cnt++;
            }

            if(cnt % 2 != 0)
            {
                ok = false;
                break;
            }
        }

        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
