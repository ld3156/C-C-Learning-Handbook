#include <iostream>
using namespace std;

/**
 * @brief 对网格进行一天的传播
 * @param a 旧网格 (n×n)
 * @param b 新网格 (n×n)
 * @param n 网格大小
 *
 * 说明: 我们在函数里,
 *  1) 先把 b 完整拷贝成 a,
 *  2) 再根据 a 中的 '@' 去感染 b 中对应位置的 3×3 区域.
 *  这样就不会出现“同一天内新感染者继续传染”的问题.
 */
void infectionOneDay(const char a[100][100], char b[100][100], int n) {
    // 1. 先把 b 完整复制为 a，确保所有位置都初始化
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[i][j];
        }
    }

    // 2. 对 a 进行遍历，若发现 '@'，则把它周围 3x3 范围内的 '.' 变成 '@' (写到 b)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (a[i][j] == '@') {
                int dr[4] = {-1, 1, 0, 0};
                int dc[4] = {0, 0, -1, 1};

                for(int k = 0; k < 4; k++){
                    int r = i + dr[k];
                    int c = j + dc[k];
                if(r >= 0 && r < n && c >= 0 && c < n){
                    if(a[r][c] == '.') b[r][c] = '@';
                }
                }

            }
        }
    }
}


int main() {
    int n;
    cin >> n;

    // 读入 a 数组
    char a[100][100], b[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int day;
    cin >> day;

    // 我们假设输入的网格是第 1 天状态，
    // 如果需要第 `day` 天，就要再传播 (day - 1) 次
    for(int times = 1; times < day; times++){
        // 让 b = infectionOneDay(a)
        infectionOneDay(a, b, n);

        // 把 b 再复制回 a，作为下一次传播的“旧网格”
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                a[i][j] = b[i][j];
            }
        }
    }
    /*
    // 传播完后, 我们可以输出第 day 天网格.
    // 如果只要输出, b 里也可以, 但最后一轮更新完, a 和 b 是一样的.
    // 这里统一输出 a
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j];
        }
        cout << endl;
    }
    */
   
    // 统计第 day 天网格中 '@' 的数量，即感染人数
    int infectedCount = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == '@') {
                infectedCount++;
            }
        }
    }

    // 输出结果
    cout << infectedCount << endl;

    return 0;
}
