//in order to move (3, A, B, C)
//we have move(2, A, C, B), then move 3 from A to C, finally move(2, B, A, C)

//if we have n plates, move(n, A, B, C)
//equals: move(N-1, A, C, B), then move bottom plate from A to C, then move(n-1, B, A, C)

# include <iostream>
using namespace std;
void move(int m, char x, char y, char z){
    if (m == 1)
    {
        cout << "move one plate from " << x << " to " << z << endl;
    }
    else
    {
        move(m-1, x, z, y);
        cout << "move one plate from " << x << " to " << z << endl;
        move(m-1, y, x, z);
    }
}

int main(){
    int n;
    cout << "how many plates:";
    cin >> n;
    move(n, 'A', 'B', 'C');
    return 0;
}