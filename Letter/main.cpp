#include <bits/stdc++.h>

using namespace std;

int main()
{
    string ch,s;

    getline(cin,ch);
    getline(cin,s);

    map<char,int> tab;

    for(size_t i=0;i<ch.length();i++){
        tab[ch[i]]++;
    }

    bool trouve=true;

    for(size_t i=0;i<s.length();i++){
         if(tab[s[i]]>0 || s[i]==' '){
            tab[s[i]]--;
        }else{
            trouve=false;
            break;
        }
    }


    if(trouve){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}
