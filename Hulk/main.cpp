#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  if(n==1){
    cout<<"I hate  it";
  }else{
    string res="";
    for(int i=0;i<n-1;i++){
        if(i==0){
            res+="I hate that ";
        }else{
            if((i+1)%2==0){
                res+=" I love that ";
            }else{
               res+=" I hate that ";
            }
        }
    }
    if(n%2==0){
        res+=" I love it";
    }else{
        res+=" I hate it";
    }
    cout<<res;
  }
}
