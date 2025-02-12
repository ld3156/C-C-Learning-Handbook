#include <iostream>
#include <iomanip>  // for fixed, setprecision
#include <math.h>   // 使用 C 风格的 math.h 替代 cmath

using namespace std;

int main() {
    int n;
    cin >> n;  // 读入点数，n >= 2

    // 用静态数组存储点坐标（假设 n 不超过 10000）
    static double x[10000], y[10000];

    // 读入所有点
    for(int i = 0; i < n; i++){
        cin >> x[i] >> y[i];
    }

    // 遍历所有点对，求最大距离
    double maxDist = 0.0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];
            double dist = sqrt(dx * dx + dy * dy);
            if(dist > maxDist) {
                maxDist = dist;
            }
        }
    }

    // 输出结果，保留小数点后 4 位
    cout << fixed << setprecision(4) << maxDist << endl;
    return 0;
}
