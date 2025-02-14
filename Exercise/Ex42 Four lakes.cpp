#include <iostream>
using namespace std;

// A 说：洞庭湖最大(a[2] == 1)，洪泽湖最小(a[4] == 4)，鄱阳湖第三(a[1] == 3)
int A(int a[]) {
    int sum = 0;
    if (a[2] == 1) sum++;  // 洞庭湖最大
    if (a[4] == 4) sum++;  // 洪泽湖最小
    if (a[1] == 3) sum++;  // 鄱阳湖第三
    return sum;
}

// B 说：洪泽湖最大(a[4] == 1)，洞庭湖最小(a[2] == 4)，鄱阳湖第二(a[1] == 2)，太湖第三(a[3] == 3)
int B(int a[]) {
    int sum = 0;
    if (a[4] == 1) sum++;  // 洪泽湖最大
    if (a[2] == 4) sum++;  // 洞庭湖最小
    if (a[1] == 2) sum++;  // 鄱阳湖第二
    if (a[3] == 3) sum++;  // 太湖第三
    return sum;
}

// C 说：洪泽湖最小(a[4] == 4)，洞庭湖第三(a[2] == 3)
int C(int a[]) {
    int sum = 0;
    if (a[4] == 4) sum++;  // 洪泽湖最小
    if (a[2] == 3) sum++;  // 洞庭湖第三
    return sum;
}

// D 说：鄱阳湖最大(a[1] == 1)，太湖最小(a[3] == 4)，洪泽湖第二(a[4] == 2)，洞庭湖第三(a[2] == 3)
int D(int a[]) {
    int sum = 0;
    if (a[1] == 1) sum++;  // 鄱阳湖最大
    if (a[3] == 4) sum++;  // 太湖最小
    if (a[4] == 2) sum++;  // 洪泽湖第二
    if (a[2] == 3) sum++;  // 洞庭湖第三
    return sum;
}

int main() {
    // a[1] = 鄱阳湖, a[2] = 洞庭湖, a[3] = 太湖, a[4] = 洪泽湖
    int a[5];

    // 枚举 a[1], a[2], a[3], a[4] 的所有排列
    for (int p = 1; p <= 4; p++) {        // p - 鄱阳湖
        for (int d = 1; d <= 4; d++) {    // d - 洞庭湖
            if (d == p) continue;
            for (int t = 1; t <= 4; t++) { // t - 太湖
                if (t == p || t == d) continue;
                for (int h = 1; h <= 4; h++) { // h - 洪泽湖
                    if (h == p || h == d || h == t) continue;
                    
                    a[1] = p; 
                    a[2] = d; 
                    a[3] = t; 
                    a[4] = h; 

                    // 每个人都恰好答对一条
                    if (A(a) == 1 && B(a) == 1 && C(a) == 1 && D(a) == 1) {
                        // 按照题目要求输出：鄱阳湖、洞庭湖、太湖、洪泽湖各自的排名
                        cout << a[1] << endl;  // 鄱阳湖
                        cout << a[2] << endl;  // 洞庭湖
                        cout << a[3] << endl;  // 太湖
                        cout << a[4] << endl;  // 洪泽湖
                        return 0;
                    }
                }
            }
        }
    }
    return 0;
}
