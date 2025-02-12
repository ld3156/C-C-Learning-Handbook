/*
描述
在main函数中， 生成一个5*5的矩阵，输入矩阵数据，并输入n，m的值。判断n，m是否在数组范围内，如果不在，则输出error；如果在范围内，则将n行和m行交换，输出交换n，m后的新矩阵。

输入
5*5矩阵的数据，以及n和m的值。

输出
如果不可交换，则输出error

如果可交换，则输出新矩阵
*/

// Exchange rows for a matrix
// The input will be a 5*5 matrix.
# include <iostream>
# include <iomanip>
using namespace std;
int main(){
    int matrix[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> matrix[i][j];
        }
    }
    int row1, row2;
    cin >> row1 >> row2;
    if (row1 < 0 || row1 > 4 || row2 < 0 || row2 > 4){
        cout<< "error" << endl;
        return 0;
    }

    for (int i = 0; i < 5; i++){
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cout<< setw(4)<< matrix[i][j];
        }
        cout << endl;
    }
    return 0;
}