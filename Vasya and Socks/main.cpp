#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int res=n+((n-1)/(m-1));
    cout<<res;
}
