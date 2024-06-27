#include <bits/stdc++.h>

using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--){
     int x1,x2,x3;
     cin>>x1>>x2>>x3;
     int sum=0;
     vector<int> total;
     int sum1=abs(x1-x1)+abs(x2-x1)+abs(x3-x1);
     int sum2=abs(x1-x2)+abs(x2-x2)+abs(x3-x2);
     int sum3=abs(x1-x3)+abs(x2-x3)+abs(x3-x3);
     int min_test=min(sum1,sum2);
     cout<<min(min_test,sum3)<<endl;
   }
}
