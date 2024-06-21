#include <iostream>

using namespace std;

int main()
{
   int x;
   cin>>x;
   int sum=0;
   sum+=x/100;
   x=x%100;
   sum+=x/20;
   x=x%20;
   sum+=x/10;
   x=x%10;
   sum+=x/5;
   x=x%5;
   sum+=x/1;
   x=x%1;
   cout<<sum;
}
