#include <iostream>
#include <map>
#include <queue>

using namespace std;

bool acceptable(map<int,int> &m,int x){
    map<int,int>::reverse_iterator it = m.rbegin();
    // while(x != 0 || cnt != -1){
    //     if(x > it->first){
    //         it--;
    //         if(it->second <= 0){
    //             continue;
    //         }
    //         int quotient = x / it->first; // x = 253; 253 / 100 = 2 
    //         x = x - (it->first * quotient); // x = 253 - (100 * 2) = 53
    //         it->second -= quotient; // 10 - 2 = 8

    //         /* 2 loop 
    //         x = 53
    //         it->first = 50;
    //         it->second = 10;
    //         53 / 50 = 1
    //         x = 53 - 50 = 3
    //         10 - 1 = 9
    //         3 loop
    //         x = 3
    //          it->first = 20;
    //         */
    //         // cnt = 5, it = 5
    //         cnt--;
    //     }else if(x < it->first){
    //         break;
    //     }
    // }
    for(it;it != m.rend();it--){
        if(x >= it->first){
            if(it->second <= 0){
                continue;
            }
            int quotient = x / it->first; // x = 253; 253 / 100 = 2 
            x = x - (it->first * quotient); // x = 253 - (100 * 2) = 53
            if(it->second < quotient){

            }
            it->second -= quotient; // 10 - 2 = 8

            /* 2 loop 
            x = 53
            it->first = 50;
            it->second = 10;
            53 / 50 = 1
            x = 53 - 50 = 3
            10 - 1 = 9
            3 loop
            x = 3
             it->first = 20;
            */
            // cnt = 5, it = 5
        }else if(x < it->first){
            break;
        }
    }
    map<int,int>::iterator itNormal;
    for(itNormal = m.begin();itNormal != m.end();itNormal++){
        cout << itNormal->first << " " << itNormal->second << endl;
    }
    if(x == 0) return true;
    else if(x != 0) return false;
}

int main(){
    int coins[7];// 1 2 5 10 20 50 100
    int N;
    map<int,int> m;
    for(int i = 0;i<7;i++){
        cin >> coins[i];
    }
    cin >> N;
    queue<int> q;
    int x;
    for(int i =0;i<N;i++){
        cin >> x;
        q.push(x);
    }
    m.insert(make_pair(1,coins[0]));
    m.insert(make_pair(2,coins[1]));
    m.insert(make_pair(5,coins[2]));
    m.insert(make_pair(10,coins[3]));
    m.insert(make_pair(20,coins[4]));
    m.insert(make_pair(50,coins[5]));
    m.insert(make_pair(100,coins[6]));

    while(N--){
        if(acceptable(m, q.front())){
            cout << "Transaction accepted!" << endl;
        }else{
            cout << "Transaction stopped!" << endl;
        }
        q.pop();
    }


    return 0;
}