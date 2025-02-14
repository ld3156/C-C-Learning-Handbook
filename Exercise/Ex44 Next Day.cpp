#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

// 判断是否是闰年
bool isLeapYear(int year) {
    // 满足以下任一条件即可：
// 1. 能被 400 整除
// 2. 能被 4 整除但不能被 100 整除
    return ( (year % 400 == 0) ||
             (year % 4 == 0 && year % 100 != 0) );
}

int main() {
    int y, m, d;
    // 读入格式为 yyyy-mm-dd
    scanf("%d-%d-%d", &y, &m, &d);

    // 各月天数表（默认平年）
    int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // 若是闰年，则二月天数为 29
    if(isLeapYear(y)) {
        md[1] = 29;
    }
    
    // 将当前天数加一
    d += 1;
    // 如果加一天后超过了该月的最大天数，则进位到下个月
    if(d > md[m - 1]) {
        d = 1;
        m += 1;
        // 如果月也超过了 12 月，则进位到下一年
        if(m > 12) {
            m = 1;
            y += 1;
        }
    }

    // 按照 yyyy-mm-dd 的格式输出下一天的日期
    // %02d 表示用至少两位数字，不足两位自动补 0
    // 使用 I/O 操纵算子 setw(2) 和 setfill('0') 实现两位补零：
    cout << setw(4) << setfill('0') << y << "-"
         << setw(2) << setfill('0') << m << "-"
         << setw(2) << setfill('0') << d << endl;

    return 0;
}
