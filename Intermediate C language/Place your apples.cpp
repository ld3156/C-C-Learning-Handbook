/*
Place m apples in n plates, empty plates are allowed, how many ways you can put
Suppose we have n > m, f(m, n) = f(m, m)
Suppose m >= n, f(m, n) = f(m, n-1) [if there exist empty plate]
                f(m, n) = f(m -n, n) [if there are no empty plate]
*/

int count(int m, int n){
    if (m <= 1 || n <= 0) return 1;
    if (m < n) return count(m, m);
    else return count(m, n-1) + count(m-n, n);
}

// key is to find the relationship between N and N-1
/*
Find out what is the continuous action;
Find out the relations of each step;
See the boundary condition;
*/