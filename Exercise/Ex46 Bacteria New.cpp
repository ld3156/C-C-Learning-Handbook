#include <iostream>
#include <algorithm>
using namespace std;

// 用一个结构体同时记录：培养皿编号、繁殖率
struct Dish {
    int id;
    double rate;
};

int main() {
    int n;
    cin >> n;

    // 用数组（或 vector）存放培养皿信息
    // id[i], rate[i]
    Dish dishes[100];

    for (int i = 0; i < n; i++) {
        int id, initialCount, finalCount;
        cin >> id >> initialCount >> finalCount;

        // 计算繁殖率 = 最终 / 初始
        // 注意要转成 double 避免整数相除
        double r = (double)finalCount / (double)initialCount;

        dishes[i].id = id;
        dishes[i].rate = r;
    }

    // 1) 按繁殖率升序排序
    // 如果要稳定排序，可用 lambda：[](const Dish &a, const Dish &b){return a.rate < b.rate;}
    sort(dishes, dishes + n, [](const Dish &a, const Dish &b) {
        return a.rate < b.rate;
    });

    // 2) 找到相邻繁殖率差值最大的分割点
    //    splitIndex 表示最大差发生在 (splitIndex, splitIndex+1) 之间
    int splitIndex = 0;
    double maxDiff = -1.0;
    for (int i = 0; i < n - 1; i++) {
        double diff = dishes[i + 1].rate - dishes[i].rate;
        if (diff > maxDiff) {
            maxDiff = diff;
            splitIndex = i;
        }
    }

    // 3) 分成两组
    // [0..splitIndex] => B组 (繁殖率低)
    // [splitIndex+1..n-1] => A组 (繁殖率高)
    // 注: 如果 splitIndex = n-1，说明所有都在 B 组，A 组为 0；若 splitIndex=0，也可能 A 组 (n-1 个)，B 组只有 1。

    int countA = n - (splitIndex + 1); // 从 splitIndex+1 到 n-1
    int countB = splitIndex + 1;       // 从 0 到 splitIndex

    // 4) 按题目要求输出:
    //   先输出 A组 数量 & 编号(按升序 rate)；再输出 B组。
    //   题目： "第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。"
    //          "然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。"

    // 输出 A 组信息
    cout << countA << endl;
    for (int i = splitIndex + 1; i < n; i++) {
        cout << dishes[i].id << endl;
    }

    // 输出 B 组信息
    cout << countB << endl;
    for (int i = 0; i <= splitIndex; i++) {
        cout << dishes[i].id << endl;
    }

    return 0;
}
