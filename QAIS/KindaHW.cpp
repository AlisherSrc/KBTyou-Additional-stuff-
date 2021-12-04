#include <iostream>
#include <map>

using namespace std;

int main(){
int a,b;
cin >> a;

pair<string, int> p;
map<string, int> m1;
map<string, int> m2;

while(a--){
    cin >> p.first >> p.second;
    m1.insert(p);
}
/*
while(a--){
    string vesch;
    int cost;
    m1[vesch] = cost;
}
*/
map<string, int> :: iterator it1 = m1.begin();
while(b--){
    cin >> p.first >> p.second;
    m2.insert(p);
    // m.insert(make_pair( , ))
}                                                       
map<string, int> :: iterator it = m2.begin();
for(it ; it != m2.end() ; it++){
    cout << it->first << " " << it->second << endl;
}
    return 0;
}

