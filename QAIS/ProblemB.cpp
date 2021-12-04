#include <iostream>
#include <stack>

using namespace std;

bool sbr(string s){
    stack<char> sb;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '('){
            sb.push('(');
        }else if(s[i] == ')') sb.pop();
    }
    return sb.empty();
} 
bool fbr(string s){
    stack<char> fb;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '{'){
            fb.push('{');
        }else if(s[i] == '}') fb.pop();
    }
    return fb.empty();
} 
bool sqbr(string s){
    stack<char> sqb;
    for(int i = 0;i < s.size();i++){
        if(s[i] == '['){
            sqb.push('[');
        }else if(s[i] == ']') sqb.pop();
    }
    return sqb.empty();
} 


int main(){
    string s;
    cin >> s;
    sbr(s) &&  fbr(s) && sqbr(s) ? cout<<"YES" : cout << "NO";

    
   
    
    return 0;
}