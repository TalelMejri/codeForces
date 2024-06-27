#include <bits/stdc++.h>

using namespace std;

int testTab(int val,vector<int> arr){
    int nb=-1;
    for(int i=0;i<arr.size();i++){
        if(val==arr[i]){
            nb=i;
        }
    }
    return nb;
}

int testOrd(vector<int> idelrs,int k){
    vector<int> numbers;
    for(int i=1;i<=k;i++){
        if(testTab(i,idelrs)==-1){
            numbers.push_back(i);
        }
    }
    return numbers.size();
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> idelrs(n);
    vector<int> times(n);

    for(int i=0;i<n;i++){
        cin >> idelrs[i];
    }

    for(int i=0;i<n;i++){
        cin >> times[i];
    }

    vector<int> numbers;
    for(int i=1;i<=k;i++){
        if(testTab(i,idelrs)==-1){
            numbers.push_back(i);
        }
    }

    if(numbers.size()==0){
        cout<<"0"<<endl;
    }else{
                int sum=0;
                for(int i=0;i<n;i++){
                    int test=idelrs[i];
                    int min_temps=times[i];
                    int indice=0;
                    for(int j=0;j<n;j++){
                        if(j<=n){
                            if(test-idelrs[j+1]==0){
                                if(min_temps>times[j+1]){
                                    min_temps=times[j+1];
                                    indice=j+1;
                                }
                            }
                        }
                    }
                    sum+=times[indice];
                    idelrs[indice]=numbers[i];
                    set<int> test_val;
                    for(int compt=1;compt<=k;compt++){
                    if(testTab(compt,idelrs)==-1){
                          test_val.insert(compt);
                        }
                    }
                    if(test_val.size()==0){
                        break;
                    }
                }
                cout<<sum<<endl;
    }

}
