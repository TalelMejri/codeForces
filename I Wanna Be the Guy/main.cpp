#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,x,n,p,q;
    cin>>n;
    cin>>p;
    vector<int> a(101);
    while(p--)
    {
        cin>>x;
        a[x]++;
    }
    cin>>q;
    while(q--)
    {
        cin>>x;
        a[x]++;
    }

    for(i=1;i<=n;i++)
    {
      if(a[i]==0)
      {
                cout<<"Oh, my keyboard!"<<endl;
               return 0;
      }
    }
    cout<<"I become the guy."<<endl;
}
