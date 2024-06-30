#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,x1,y1;
        cin>>x>>y>>x1>>y1;
        if(x<y && x1<y1 || x>y && x1>y1)
        {
            cout<<"YES"<<endl;
        }
        else   cout<<"NO"<<endl;
    }
}
