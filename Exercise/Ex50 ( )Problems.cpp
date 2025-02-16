#include <iostream>
using namespace std;

// 处理每一行输入，找出不匹配的括号并标记
void pairMatch(char s[110]) {
    // 求字符串长度
    int len = 0;
    while (s[len] != '\0')
        len++;

    // 构造一个标记数组，初始均为空格
    char marker[110];
    for (int i = 0; i < len; i++) {
        marker[i] = ' ';
    }
    marker[len] = '\0';

    // 用数组模拟栈，存储左括号 '(' 的下标
    int stack[110]; 
    int top = -1;  // 栈空时 top 为 -1

    for (int i = 0; i < len; i++) {
        if (s[i] == '(') {
            // 左括号入栈
            top++;
            stack[top] = i;
        }
        else if (s[i] == ')') {
            if (top >= 0) {
                // 找到匹配的左括号，出栈
                top--;
            }
            else {
                // 无匹配的右括号，标记为 '?'
                marker[i] = '?';
            }
        }
        // 其它字符不做处理
    }

    // 对于剩余未匹配的左括号，标记为 '$'
    while (top >= 0) {
        marker[stack[top]] = '$';
        top--;
    }

    // 输出原始字符串及对应的标记行
    cout << s << endl;
    cout << marker << endl;
}

int main() {
    char s[110];
    // 每行输入一组数据
    while (cin.getline(s, 110)) {
        pairMatch(s);
    }
    return 0;
}
