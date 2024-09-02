#include <bits/stdc++.h>

using namespace std;

string getStringCompatible(string s1,string s2){
    string res="";

    for(size_t i=0;i<s1.size();i++){
        if(s1[i]==s2[i]){
            res+=s1[i];
        }else{
            if(s1[i]=='S'){
                if(s2[i]=='E'){
                    res+='T';
                }else{
                    res+='E';
                }
            }else if(s1[i]=='E'){
                if(s2[i]=='S'){
                    res+='T';
                }else{
                    res+='S';
                }
            }else{
                 if(s2[i]=='S'){
                    res+='E';
                }else{
                    res+='S';
                }
            }

        }
    }
    return res;
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<string> tab(n);
    set<string> set1;
    vector<string> strings;
    set<vector<string>> set2;

    for(int i=0;i<n;i++){
        cin>>tab[i];
        set1.insert(tab[i]);
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            string s1=tab[i];
            string s2=tab[j];
            string s3=getStringCompatible(s1,s2);
            if(set1.find(s3)!=set1.end()){
                strings.clear();
                strings.push_back(s1);
                strings.push_back(s2);
                strings.push_back(s3);
                sort(strings.begin(),strings.end());
                set2.insert(strings);
            }
        }
    }

    cout<<set2.size()<<endl;
}
