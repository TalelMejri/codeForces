#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
      int x,y;
       cin>>x>>y;
       int ans = y%x;
        y /= x;
      while (y > 0) {
            ans += y%10;
            y /= 10;
        }
    cout<<ans<<endl;
    }

}
