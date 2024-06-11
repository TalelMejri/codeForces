#include <bits/stdc++.h>

using namespace std;

int sumVector( vector<int> arr) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        res += arr[i];
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int test = 0;
        int sum=sumVector(arr);
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                sum++;
                test++;
            }
        }
        if(sum==0){
            test++;
        }
        cout<<test<<endl;
    }

    return 0;
}
