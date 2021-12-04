#include <iostream>

using namespace std;


int maxnumb(string str){
    int max = str[0] - 48;
    for(int i = 0;i < str.size(); i++){
        if((str[i + 1] - 48) > max ){
            max = str[i + 1] - 48;
        }else continue;
    }
    return max;
}

int main(){
    string s;
    cin >> s;
    cout << maxnumb(s);
    return 0;
}