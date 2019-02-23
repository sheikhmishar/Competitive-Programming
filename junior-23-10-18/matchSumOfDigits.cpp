
#include <bits/stdc++.h>

//using namespace std;



int main() {
    int L, D, X, N, M;
    scanf("%d %d %d", &L, &D, &X);
    for(int count = L; count <= D; count++){
        int tmp = count;
        N = 0;
        while(tmp > 0){
            N += tmp%10;
            tmp/=10;
        }
        if(N == X){
            N = count;
            break;
        }
    }
    for(int count = D; count >= L; count--){
        int tmp = count;
        M = 0;
        while(tmp > 0){
            M += tmp%10;
            tmp/=10;
        }
        if(M == X){
            M = count;
            break;
        }
    }
    printf("%d\n", N);
    printf("%d\n", M);
    return 0;
}


/*
The impossible has happened. Bear G. has fallen into his own trap. Lured by a delicious box of Doma?ica, without even thinking, he rushed and fell into his trap. In order to get out of the trap, he must solve the following task with your help. You are given three integers L, D and X.

determine the minimal integer N such that L?N?D and the sum of its digits is X

determine the maximal integer M such that L?M?D and the sum of its digits is X

Bear will be able to escape from the trap if he correctly determines numbers N and M. The numbers N and M will always exist.

Input
The first line of input contains the integer L (1?L?10000), the number from the task. The second line of input contains the integer D (1?D?10000, L?D), the number from the task. The third line of input contains the integer X (1?X?36), the number from the task.

Output
The first line of output must contain the integer N from the task. The second line of output must contain the integer M from the task.

Sample Input 1	Sample Output 1
1
100
4
4
40
Sample Input 2	Sample Output 2
100
500
12
129
480
Sample Input 3	Sample Output 3
1
10000
1
1
10000
*/