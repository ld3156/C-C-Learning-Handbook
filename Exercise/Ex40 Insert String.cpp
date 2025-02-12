#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, sub;
    // 循环读入，直到 EOF
    while (cin >> str >> sub) {
        // 1. 寻找 str 中 ASCII 码最大的字符
        char maxChar = str[0];
        int maxIndex = 0;
        for (int i = 1; i < (int)str.size(); i++) {
            if (str[i] > maxChar) {
                maxChar = str[i];
                maxIndex = i;
            }
        }

        // 2. 在该字符后面插入 sub
        //    insert(pos, 要插入的字符串) 将字符串插入到 pos 下标之前；
        //    因为我们要插在 maxIndex 后面，所以在 maxIndex+1 的位置插入。
        str.insert(maxIndex + 1, sub);

        // 3. 输出结果
        cout << str << "\n";
    }

    return 0;
}
