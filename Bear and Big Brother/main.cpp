#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int nbr=0;
    while(a<=b){
       nbr+=1;;
       b*=2;
       a*=3;
    }
    cout<<nbr;
}
