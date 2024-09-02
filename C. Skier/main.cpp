#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<pair<int,int>> tab;
    set<vector<pair<int,int>>> sett;

    int t;
    cin>>t;
    while(t--){
        sett.clear();
        string ch;
        cin>>ch;
        int x=0;
        int y=0;
        int n=ch.size();
        int res=0;
        for(int i=0;i<n;i++){
              int dx=x;
              int dy=y;
              char c=ch[i];
              if(c=='N'){
                dy++;
              }else if(c=='S'){
                dy--;
              }else if(c=='E'){
                dx++;
              }else{
                dx--;
              }
              tab.clear();
              tab.push_back(make_pair(x,y));
              tab.push_back(make_pair(dx,dy));
              sort(tab.begin(),tab.end());
              if(sett.find(tab)!=sett.end()){
                res++;
              }else{
                res+=5;
                sett.insert(tab);
              }
              y=dy;
              x=dx;
        }
        cout<<res<<endl;
    }
}
