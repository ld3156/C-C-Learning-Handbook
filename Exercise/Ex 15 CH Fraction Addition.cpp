#include<iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int sumn = 0, sumd = 1;//储存结果，sumn/sumd
  while (n--) {
    int num, deno;
    char slash;//专门用来吃掉/的
    cin >> num >> slash >> deno;
    //先相加 a/b + c/d = (a*d+c*b)/(b*d)
    sumn = sumn*deno + num*sumd;
    sumd = sumd*deno;
  }
  //后约分
  //先求最大公约数gcd，这里用的是欧几里得法
  int a = sumd, b = sumn, c;
  while (a != 0) {
    c = a; a = b%a; b = c;
  }
  int gcd = b;
  //分子分母同时除以gcd就可以完成约分
  sumd /= gcd;
  sumn /= gcd;
  if (sumd > 1)
    cout << sumn << '/' << sumd << endl;
  else
    cout << sumn << endl;
  return 0;
}
//我们计算过程中结果分母是不断乘以新输入的分母，最后约分的。这样可能导致这个过程中分母过大溢出。
//这道题的数据比较简单，并没有出现那种情况。但大家可以思考一下，如果出现了那种情况怎么办呢？（不要用大整数啊）
/*我给大家一组测试数据，看看你修改过的程序能不能通过这组数据吧：
样例输入：
2
1/100000000
1/100000000
样例输出：
1/50000000
*/