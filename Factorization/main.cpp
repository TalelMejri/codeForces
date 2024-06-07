    #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t;
        cin>>t;
        for(int test=1;test<=t;test++){
            int n;
            cin>>n;
            vector<int> a;
            int c=0;
            while(n>0){
                if(n%10!=0){
                    int x=(n%10)* pow(10,c);
                    a.push_back(x);
                }
                n=n/10;
                c++;
            }
            for(int i=0;i<a.size();i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }
