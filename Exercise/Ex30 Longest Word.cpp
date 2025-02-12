/*
描述
一个以'.'结尾的简单英文句子，单词之间用空格分隔，没有缩写形式和其它特殊形式

输入
一个以'.'结尾的简单英文句子（长度不超过500），单词之间用空格分隔，没有缩写形式和其它特殊形式

输出
该句子中最长的单词。如果多于一个，则输出第一个

*/
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[500];
    cin.getline(str, 500);

    // 存储当前读入单词的临时数组和最终最长单词
    char temp[500] = "";    
    char output[500] = "";

    int i = 0;
    int count = 0;          // 当前单词的长度
    int maxLen = 0;         // 记录已发现的最长单词长度

    // 遍历直到遇到 '.' 或字符串结束符 '\0'
    while (str[i] != '.' && str[i] != '\0') {
        if (str[i] == ' ') {
            // 单词结束，比较是否为最长
            if (count > maxLen) {
                maxLen = count;
                strncpy(output, temp, count);
                output[count] = '\0';  // 手动添加字符串结束符
            }
            // 重置 temp 和 count，准备读取下一个单词
            temp[0] = '\0';
            count = 0;
        } else {
            // 将当前字符追加到 temp
            temp[count] = str[i];
            count++;
            temp[count] = '\0'; // 保持 temp 随时是有效字符串
        }
        i++;
    }

    // 当循环因为遇到 '.' 或 '\0' 结束时，可能还有最后一个单词没比较
    // 如果最后不是以空格结尾，则这里还保留着最后一个单词
    if (count > maxLen) {
        maxLen = count;
        strncpy(output, temp, count);
        output[count] = '\0';
    }

    // 输出最长单词
    cout << output << endl;

    return 0;
}
