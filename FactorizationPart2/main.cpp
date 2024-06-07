#include <bits/stdc++.h>

using namespace std;

void send(char c  , int n )
{
    cout<<c ;
    for(int i  = 0 ; i<n;i++)
    {
        cout<<"0";
    }
    cout<<" ";
}

void solve()
{

   string s; cin>>s;  int c  = 0 ;
    for(int i    = 0  ; i < s.length() ; i++)
    {
        if (s[i]!='0')
        {
            c++ ;
        }
    }
    int n =  s.length();
    cout<<c<<endl;
    for(int i  = 0 ; i<n;i ++ )
    {
        if(s[i]!='0')
        {
            send(s[i],(n-(i+1)));
        }
    }
    cout<<endl;
}



int main()
{
    int t ;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;

}



