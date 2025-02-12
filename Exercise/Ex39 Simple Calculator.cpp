# include <iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cin >> a >> b >> op;

switch (op) {
    case '+':
        cout << (a + b) << endl;
        break;
    case '-':
        cout << (a - b) << endl;
        break;
    case '*':
        cout << (a * b) << endl;
        break;
    case '/':
        // 如果除数为 0，输出 "Divided by zero!"
        if (b == 0) {
            cout << "Divided by zero!" << endl;
        } else {
            cout << (a / b) << endl;
        }
        break;
    default:

        cout << "Invalid operator!" << endl;
}

return 0;
}