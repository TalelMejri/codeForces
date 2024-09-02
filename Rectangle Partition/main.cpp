#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w;
    int h;
    int count_x;
    int count_y;
    vector<int> Xaxis;
    vector<int> Yaxis;
    map<int,int> mp;
    cin >> w >> h >> count_x >> count_y; cin.ignore();

    for (int i = 0; i < count_x; i++) {
        int x;
        cin >> x; cin.ignore();
        Xaxis.push_back(x);
    }

    Xaxis.push_back(0);
    Xaxis.push_back(w);

    for (int i = 0; i < count_y; i++) {
        int y;
        cin >> y; cin.ignore();
        Yaxis.push_back(y);
    }

    Yaxis.push_back(0);
    Yaxis.push_back(h);


    int n=Xaxis.size();
    for(int i=0;i<n-1;i++){
        int e1=Xaxis[i];
        for(int j=i+1;j<n;j++){
            int e2=Xaxis[j];
            int diff=abs(e1-e2);
            mp[diff]++;
        }
    }

    int res=0;
    int m=Yaxis.size();
    for(int i=0;i<m-1;i++){
        int e1=Yaxis[i];
        for(int j=i+1;j<m;j++){
            int e2=Yaxis[j];
            int diff=abs(e1-e2);
            if(mp[diff]>0){
                res+=mp[diff];
            }
        }
    }

    cout<<res<<endl;

}
