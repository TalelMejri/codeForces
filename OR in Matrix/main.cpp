#include <bits/stdc++.h>
using namespace std;


int main() {
    const int N=100;
    int m,n;
    int B[N][N];
    int A[N][N];
    cin>>m>>n;
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
            A[i][j]=1;
    }

    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
            cin>>B[i][j];
    }

    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
            {
                int c = B[i][j];
                if (c==0)
                {
                    for (int x=0 ; x<n ; x++)
                        A[i][x]=0;

                    for (int x=0 ; x<m ; x++)
                        A[x][j]=0;
                }
            }
    }

    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
            {
                int c = B[i][j];
                int t = 0;
                for (int x=0 ; x<n ; x++)
                {
                        t+= A[i][x];
                        if (c==0 && t>0)
                        {
                            cout<<"NO";
                            return 0;
                        }
                }

                for (int x=0 ; x<m ; x++)
                {
                            t+=A[x][j];
                            if (c==0 && t>0)
                                {
                                    cout<<"NO";
                                    return 0;
                                }
                }
                if (t==0 && c!=0)
                    {
                        cout<<"NO";
                        return 0;
                    }
                }
    }
    cout<<"YES\n";
    for (int i=0 ; i<m ; i++)
    {
        for (int j=0 ; j<n ; j++)
            cout<<A[i][j]<<" ";
        cout<<'\n';
    }

    return 0;
}
