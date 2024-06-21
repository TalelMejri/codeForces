#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<char> st;
    char x;
    cin>>x;
    while(true)
    {
        cin>>x;
        if(x=='}')
            break;
        if(x>='a' && x<='z')
        {
            st.insert(x);
        }
    }
    cout<<st.size()<<endl;;
}
