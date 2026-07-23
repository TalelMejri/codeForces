#include <iostream>

#define ll long long
using namespace std;

int main()
{
    ll n,m,a;
    cin>>n>>m>>a;
    ll x=n%a!=0 ? n/a+1 : n/a;
    ll y=m%a!=0 ? m/a+1 : m/a;
    cout<<x*y;
}
