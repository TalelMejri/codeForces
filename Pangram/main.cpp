#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string ch;
    cin>>ch;
   	set<char> st;
    string s="";
    for(int i=0;i<ch.size();i++){
        s+=tolower(ch[i]);
    }
	for(int i=0;i<s.size();++i){
		st.insert(s[i]);
	}
	cout << (st.size()==26? "YES" : "NO") <<endl;
}
