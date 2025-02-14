#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // personTotal[i] 表示第 i 个人（ID=i）的发票总金额
    double personTotal[4] = {0.0, 0.0, 0.0, 0.0};

    // categoryTotal['A']、['B']、['C'] 分别表示 A/B/C 三类发票的总金额
    // 为了简单，这里用三个独立变量；也可用 map<char,double> 来存。
    double aTotal = 0.0, bTotal = 0.0, cTotal = 0.0;

    // 题目说一共有 3 行输入，每行格式：
    // ID  发票总张数  [类别1 金额1  类别2 金额2  ...]
    for (int line = 0; line < 3; line++) {
        int id, count;
        cin >> id >> count;        // 读出“人员ID”和“发票张数”
        
        for (int i = 0; i < count; i++) {
            char category;
            double amount;
            cin >> category >> amount;  // 依次读出“发票类别”和“金额”

            // 给对应人员累加
            personTotal[id] += amount;

            // 给对应的类别累加
            if (category == 'A') {
                aTotal += amount;
            } else if (category == 'B') {
                bTotal += amount;
            } else if (category == 'C') {
                cTotal += amount;
            }
        }
    }

    // 输出结果：6 行
    // 前三行：按人员 ID=1,2,3 的总金额
    // 后三行：按发票类别 A, B, C 的总金额
    // 固定两位小数输出
    cout << fixed << setprecision(2);

    cout << personTotal[1] << endl;  // ID=1
    cout << personTotal[2] << endl;  // ID=2
    cout << personTotal[3] << endl;  // ID=3

    cout << aTotal << endl;          // A 类
    cout << bTotal << endl;          // B 类
    cout << cTotal << endl;          // C 类

    return 0;
}
