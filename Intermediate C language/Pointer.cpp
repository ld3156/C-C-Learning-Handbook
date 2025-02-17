// *&c
// pointer variable stores address (which points to another variable)

// How we define it? int *pointer;
/*
假如我们有一个指针变量用于储存变量C的值，C是一个int,那么我们有：
int *pointer; int:基类型 *指针运算符
赋值代码：
    int c = 76;
    int *pointer;
    pointer = &c; 赋的是c的地址
*/

# include <iostream>
using namespace std;
int main(){
    int iCount = 18;
    int * iPtr = &iCount;
    *iPtr = 58; // change iCount by using pointer
    cout << iCount << endl;
    cout << iPtr << endl;
    cout << &iCount << endl;
    cout << *iPtr << endl;
    cout << &iPtr << endl;
    return 0;
}
