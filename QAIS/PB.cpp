#include <iostream>
#include <stack>

using namespace std;

bool Brackets(string s){
    stack<char> ss;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            ss.push(s[i]);
        }else{
            ss.pop();
        }
    }
    return ss.empty();
}

int main(){
    string s;
    cin >> s;
    Brackets(s) ? cout << "YES" : cout << "NO";
    // condition ? true : false

    return 0;
}