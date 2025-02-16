#include <iostream>
#include <string>
using namespace std;

// 递归函数：翻转给定单词
string reverseWord(const string &word, int index) {
    if (index < 0) return "";
    return word[index] + reverseWord(word, index - 1);
}

int main() {
    char input[501];
    // 使用 cin.getline 读取一行输入
    cin.getline(input, 501);
    
    string s(input);
    string result;
    int i = 0;
    int n = s.size();
    
    while (i < n) {
        // 如果遇到空格，直接添加到结果中，保持原有空格数目
        if (s[i] == ' ') {
            result.push_back(s[i]);
            i++;
        } else {
            // 累积当前单词
            string word;
            while (i < n && s[i] != ' ') {
                word.push_back(s[i]);
                i++;
            }
            // 递归翻转单词并加入结果
            result += reverseWord(word, word.size() - 1);
        }
    }
    
    cout << result;
    return 0;
}
