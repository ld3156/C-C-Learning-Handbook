# include <iostream>
# include <iomanip>
using namespace std;
// 运用指针去颠倒数组
int inverse(int a[10]){
    int *p = NULL, *q = NULL, temp;
    for (p = a; p < a + 10; p++)
        cin >> *p;
    for (p = a, q = a + 9; p < q; p++, q--){
        temp = *p; *p = *q; *q = temp;
    }
    for (p = a; p < a + 10; p++){
        cout << setw(3) << *p;
    }
    return 0;
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int *p = &a[3];
    *p = 100;
    cout << a[3] << endl; // print 100
    
    cout << a << endl; // print the address of a[]
    cout << *a << endl; // print a[0]. which is 1
    cout << &a[0] << endl; // same address of a
    // 数组名相当于指向第一个元素a[0]的指针

    int b[3] = {10, 11, 12};
    int *q = NULL;
    cout << b << endl;
    q = b;
    cout << q << endl;
    cout << *q << endl;
    cout << *q++ << endl; 
    // 数组访问可以用：pointer[i] 等价于 *(pointer + i) 等价于 *(a + i) 等价于 a[i]
    // 赋值 cin >> *p++
    return 0;
}