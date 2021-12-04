#include <iostream>

using namespace std;

//Variables -- box, data holder, stack
// Data types -- int --integer [1, 2, 3, 5, 100, 500 .....]

//variable name rules:
/*
1) name can not be started with numbers
2) name can not be only number
3) names can be only in range of [a-z;A-Z; 0-9; _ (Without any symbols)]
    
    valid examples for variable names:


    invalid examples for variable names:
    int 1;
    int 123;
    int $%;
    int my var;
*/

int main(){
    int students = 200; //value stored from right to left
    int ISstudents = 100;

    int a = students;

    cout << "There are " << students << " students" << endl;
    cout << a << endl;
    // Should we register in the system with using kbtu e mails, or shoud we use own emails
    return 0;
}