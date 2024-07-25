#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string ch;
        cin>>ch;
        string ans;
        for(int i=0; i<n; i++){
            if(ch[i]=='b' || ch[i]=='c' || ch[i]=='d'){
                if(i+1 < n && (ch[i+1]=='a' || ch[i+1]=='e')){
                    if( (ch[i+2]=='b' || ch[i+2]=='c' || ch[i+2]=='d') && (ch[i+3]!='e' && ch[i+3]!='a')){
                        ans += ch[i];
                        ans += ch[i+1];
                        ans += ch[i+2];
                        ans += '.';
                        i += 2;
                    } else {
                        ans += ch[i];
                        ans += ch[i+1];
                        ans += '.';
                        i++;
                    }
                }
            }
        }
        cout << ans.substr(0,ans.size()-1) << endl;
    }
}
