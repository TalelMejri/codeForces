#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int ans=-2000000000;
    for (int i = 0; i < n; i++) {
        int f,t;
        cin>>f>>t;

        int joy=f;
        if(t>k){
            joy-=(t-k);
        }
        ans=max(ans,joy);
    }
    cout<<ans<<endl;
}
