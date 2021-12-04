#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){
    map<string, vector<string> > m;
    map<string, vector<string> >:: iterator it;
    m["Italy"] = {"Rome, Palermo"};
    m["Spain"] = {"Barselona. Madrid"};
    m["France"] = {"Paris, Marsel"};

    for(i = m.begin();it != m.end();it++){
        cout << (*it).first << endl;
        for(int i = 0;;)
    }

    return 0;
}