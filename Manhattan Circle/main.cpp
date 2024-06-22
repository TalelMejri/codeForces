#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
      int n,m;
      cin>>n>>m;
      int ligne=-1,colonne=-1;
      int mx=0;
      char arr[n][m];
      for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
             cin >> arr[i][j];
          }
      }

      for(int i = 0; i < n; i++){
          int test=0;
          for(int j = 0; j < m; j++){
            if(arr[i][j]=='#'){
                test++;
            };
          }
          if(test>mx){
            mx=test;
            ligne=i;
          }
      }
       mx=0;
       for(int j = 0; j < m; j++){
          int test=0;
          for(int i = 0; i < n; i++){
            if(arr[i][j]=='#'){
                test++;
            };
          }
          if(test>mx){
            mx=test;
            colonne=j;
          }
      }

      cout << ligne+1 << " " <<colonne+1 << "\n";

   }
}
