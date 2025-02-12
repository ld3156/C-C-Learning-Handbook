/*
描述
中位数定义：一组数据按从小到大的顺序依次排列，处在中间位置的一个数或最中间两个数据的平均值（如果这组数的个数为奇数，则中位数为位于中间位置的那个数；如果这组数的个数为偶数，则中位数是位于中间位置的两个数的平均值）.

给出一组无序整数，求出中位数，如果求最中间两个数的平均数，向下取整即可（不需要使用浮点数）

输入
该程序包含多组测试数据，每一组测试数据的第一行为N，代表该组测试数据包含的数据个数，1 <= N <= 15000.

接着N行为N个数据的输入，N=0时结束输入

输出
输出中位数，每一组测试数据输出一行
*/
# include <iostream>
using namespace std;
int main(){
    int n;
    while (cin >> n){
        if (n == 0) break;
        int a[15000];
        for (int i = 0; i < n; i++){
        cin >> a[i];
        }
        // sorting
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < n - i; j++) {
                if (a[j-1] > a[j]) {
                    int temp = a[j];
                    a[j] = a[j - 1];
                    a[j - 1] = temp;
                }
            }
        }

        if (n % 2 == 0){
            cout << (a[n / 2 - 1] + a[n / 2]) / 2 << endl;
        } else{
            cout << (a[n / 2]) << endl;
        }
    }
    return 0;
    }