#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin >> a >> b >> c;
      if((a+b+c)%2){
            cout << -1 << '\n';
      }else{
            if(c >= (a+b)){
                cout << a+b << '\n';
            }else{
                int cnt = 0;
                while(a+b > c){
                    a--;
                    b--;
                    cnt++;
                    if(a+b <= c) break;
                }
					cout << c+cnt << '\n';
				}
			}
    }
}
