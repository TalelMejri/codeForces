#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int k=2;
    while (true) {
        int val = pow(2,k)-1;
        if (n % val == 0) {
            cout << n / val << endl;
            break;
        }
        k++;
    }
  }
}
