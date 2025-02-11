/*
Switch statement framework:
switch (expression)
{
    case constant1:
        statement1;
        break;
    case constant2:
        statement2;
        break;
    ...
    default:
        statement;
        break;
}

Case offers a specific entrance to the program, and break is the exit.
*/

#include <iostream>
using namespace std;
int main(){
    char grade = 'a';
    cin >> grade;
    switch (grade)
    {
        case 'a': cout << "Excellent" << endl; break;
        case 'b': 
        case 'c': cout << "Good" << endl; break;
        case 'd': 
        case 'f': cout << "Fail" << endl; break;
        default: cout << "Invalid grade" << endl; break;
    }  
    return 0;
}