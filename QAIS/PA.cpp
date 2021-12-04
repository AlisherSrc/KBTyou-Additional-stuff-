#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
    int n;
    cin >> n;
    int arr1[n];
    vector<int> v1,v2; // v1 odd v2 even

    for(int i = 0;i < n;i++){
        cin >> arr1[i];
        if(arr1[i] % 2 != 0){
             v1.push_back(arr1[i]);
        }else{
             v2.push_back(arr1[i]);
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.rbegin(),v2.rend());
    //int a = v2.size() - 1;
   // int b = v1.size() - 1;
    for(int i = 0;i < n;i++ ){
            arr1[i] = v2[i];
            arr1[v2.size() + i];
    }
    for(int i = 0; i<n;i++){
        cout << arr1[i] << " ";
    }
    return 0;
}