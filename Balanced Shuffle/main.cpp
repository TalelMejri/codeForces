#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<tuple<int,int,char>> tab;
    int nbr=0;

    for(size_t i=0;i<s.size();i++){
        tab.push_back(make_tuple(nbr,-i,s[i]));
        if(s[i]=='('){
            nbr++;
        }else{
            nbr--;
        }
    }

    sort(tab.begin(),tab.end());

    for(auto ans:tab){
        cout<<get<2>(ans);
    }
    cout<<endl;


}
