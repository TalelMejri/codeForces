#include <bits/stdc++.h>

using namespace std;

void solveL(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int> tab;
    tab.push_back(a);
    tab.push_back(b);
    tab.push_back(c);
    sort(tab.begin(),tab.end());
    if(tab[0]+tab[1]==tab[2]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}

int CheckNumberForkes(int x){
    if(x==0){
        return 0;
    }
    if (x==1){
        return 1;
    }
    int puissanse=0;
    while(pow(2,puissanse)<=x){
        puissanse++;
    }
    puissanse=puissanse-1;
    int b=x-pow(2,puissanse);

    return (CheckNumberForkes(b)+1);
}

void solveE(){
    int n,k;
    cin>>n>>k;
    int ans=n*(k/(n-1));
    if(k%(n-1)==0){
        ans--;
    }
    cout<<ans+(k%(n-1))<<endl;
}

void solveC(){
    int x;
    cin>>x;
    int res=CheckNumberForkes(x);
    cout<<res<<endl;
}

void solveS(){
   int n,k;
   cin>>n>>k;
   vector<int> tab(n);
   for(int i=0;i<n;i++){
      cin>>tab[i];
   }
   int nbr=0;
   for(int i=0;i<n;i++){
    if((tab[i]+k)<=5){
        nbr++;
    }
   }
   cout<<nbr/3<<endl;
}

void solveB(){
    int n;
    cin>>n;
    vector<int> tab(n);
    set<int> sett;
    for(int i=0;i<n;i++){
        cin>>tab[i];
        sett.insert(tab[i]);
    }
    if(sett.size()==1){
        cout<<n<<endl;
    }else{
        sort(tab.begin(),tab.end());
        /*
        for(int i=0;i<n;i++){
                nbr++;
                for(int j=i+1;j<n;j++){
                    if(tab[i]-tab[j]<=5){
                        nbr++;
                    }
                }
            mx=max(nbr,mx);
            nbr=0;
        }
        */
       /* int i=0,j=1;
        while(i<n){
            if(tab[i]-tab[j]<=5 && j++<n){
                nbr++;
            }else{
                mx=max(nbr,mx);
                nbr=1;
                i++;
                j=i+1;
            }
        }
        cout<<mx<<endl;*/
        int mx=1,l=0;
        for(int r=0;r<n;r++){
            while(tab[r]-tab[l]>5){
                   ++l;
            }
            mx=max(mx,l-r+1);
        }
        cout<<mx<<endl;
    }
}

void solveM(){
   int n;
   cin>>n;
   map<string,int> mp;
   int checkA=0,checkB=0,checkC=0;
   for(int i=0;i<n;i++){
        int coast;
        cin>>coast;
        string ch;
        cin>>ch;
        if(mp.size()==0){
            mp[ch]=coast;
        }else{
            if(mp[ch]){
                if(mp[ch]>coast){
                    mp[ch]=coast;
                }
            }else{
                mp[ch]=coast;
            }
        }
   }

   if(checkA==0 || checkB==0 || checkC==0){
      cout<<-1<<endl;
   }else{
      string all="";
      for(auto x:mp){
         all+=x.first;
      }

      for(size_t i=0;i<all.size();i++){
        if(all[i]=='A'){
            checkA=1;
        }else if(all[i]=='B'){
            checkB=1;
        }else{
            checkC=1;
        }
      }

      if(checkA==0 || checkB==0 || checkC==0){
        cout<<-1<<endl;
      }else{

      }
   }
}

 int main()
{
    int t;
    t=1;
    while(t--){
        solveB();
    }
}
