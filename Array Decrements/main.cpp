#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
               bool yes=1;
        int zeros=0;
        int diff;
        for (int i=0 ; i<n ; i++)
        {
            if (a[i]<b[i])
            {
                yes=0;
                break;
            }
            if (!b[i])
                zeros++;

            if (a[i]>=b[i] && b[i])
                diff=a[i]-b[i];
        }

        if (!yes)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if (zeros == n)
        {
            cout<<"YES"<<endl;
            continue;
        }

        for (int i=0 ; i<n ; i++)
        {
            if((b[i] && a[i]-b[i]!=diff) || (!b[i] && a[i]>diff))
            {
                yes=0;
                break;
            }
        }

        if (!yes)
        {
            cout<<"NO"<<endl;
            continue;
        }
        else
        {
            cout<<"YES"<<endl;
            continue;
        }



    }
    return 0;
}
