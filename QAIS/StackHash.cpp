#include <iostream>
#include <stack>
#include <math>

using namespace std;

int main(){
    int n;
    cin >> n;
    stack<int> st;
    while(n--){
        int x;
        cin >> x;
        int temp = x;
        if(!st.empty()){
            temp -= hash(st.top());
        }
    }
}
