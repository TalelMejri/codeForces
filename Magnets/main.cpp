#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
         cin >> arr[i];
    }

    int nbr=0;
    for(int i = 0;i <= n - 1;i++){
       if(arr[i] != arr[i + 1]){
            nbr++;
        }
    }
    cout<<nbr<<endl;
    return 0;
}
