#include <iostream>

using namespace std;

int main()
{
   int i,l1,r1,l2,r2,q;
  cin>>q;
  /*while(q--){
     string ch1,ch2;
     cin>>ch1>>ch2;
     int min_length=min(ch1.size(),ch2.size());
     int ans=0;
     for(int i=0;i<min_length;i++){
            if(ch1[i]!=ch2[i]){
                break;
            }
            else {
                ans=i;
            }
    }
    ans++;
    int reste=ch1.size()-ans+ch2.size()-ans;
    cout<<reste+ans+1<<endl;

  }*/
for(i=0;i<q;i++){
        cin>>l1>>r1>>l2>>r2;
if (l1==l2)
   cout<<l2<<" "<<r2<<endl;
else {
    if (l2<r1) cout<<l2 <<" " <<r2<<endl;
    else cout<<l1<<" "<<r1<<endl;
}
}




}
