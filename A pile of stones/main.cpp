#include <iostream>

using namespace std;

int main()
{
    int n,ans = 0;;
    string s;
    cin>>n>>s;

    for(int i=0; i<n; i++){
        if(s[i] == '-' && ans > 0){
            ans--;
        }
        else if(s[i] == '+'){
            ans++;
        }
    }
    cout<<ans<<endl;
}
