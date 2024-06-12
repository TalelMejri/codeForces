#include <iostream>

using namespace std;

int main()
{
    int n,i, a[1001],b[1001];
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]=i+1;
    }
    for (i=1;i<=n;i++)
    {
        cout<<b[i]<<" ";
    }
}
