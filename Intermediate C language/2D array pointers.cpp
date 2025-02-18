// 定义一个包含4个int元素的一维数组的指针变量
// int (*p)[4];
# include <iostream>
# include <iomanip>
using namespace std;
char* fun(char * p){
    return p;
}
int main(){
    int a[3][4] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23};
    int (*p)[4], i, j;
    p = a; //赋予第一个小数组的地址（包含四个元素的小数组）
    cin >> i >> j;
    cout << setw(4) << *(*(p+i)+j); //访问元素a[i][j], p + i 等价于 &a[i]
    // 相同的
    cout << setw(4) << p[i][j];
    return 0;
}