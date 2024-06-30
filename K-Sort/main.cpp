#include <bits/stdc++.h>

using namespace std;

int TestSorted(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > arr[i + 1]) {
            return i;
        }
    }
    return -1;
}

vector<int> AllIndices(vector<int> arr,int k) {
    vector<int> indices;
    int maximum=arr[k];
    int i=k;
    while(i<arr.size()){
        if(maximum>arr[i]){
              indices.push_back(i);
        }else{
            maximum=arr[i];
        }
         i++;
       }
    return indices;
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
        int result = TestSorted(arr);
        if (result == -1) {
            cout << "0" << endl;
        } else {
            int ans=1;
            int k=TestSorted(arr);
            vector<int> indices = AllIndices(arr,k);
            int i=0;
            while(i<indices.size()){
               while(arr[indices[i]]<arr[indices[i]-1]){
                    ans++;
                    arr[indices[i]]++;
                }
                int test = TestSorted(arr);
                if(test==-1){
                    break;
                }
                i++;
            }
            /*for(int i=0;i<indices.size();i++){
                cout<<arr[indices[i]]<<endl;
            }*/
           cout << ans << endl;
        }
    }

}
