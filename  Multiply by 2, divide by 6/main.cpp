#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin >> n;
    int ans = 0;
    int trouve=0;
    while (n != 1) {
        ans++;
        if (n % 6 == 0) {
            n /= 6;
            continue;
        }
        if (n % 3 == 0) {
            n *= 2;
            continue;
        }
        trouve=1;
        n=1;
    }
     if(trouve){
        cout << -1 << endl;
     }else{
        cout << ans << endl;
     }
}
}
