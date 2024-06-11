#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[5][5];
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>arr[i][j];
    }
   }

   int row=-1,col=-1;
   for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
         if(arr[i][j] == 1){
            row = i;
            col = j;
         }
    }
   }

   int res=abs((2-row))+abs((2-col));
   cout<<res;
}


