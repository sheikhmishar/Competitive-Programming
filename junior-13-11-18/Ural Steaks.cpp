#include <bits/stdc++.h>
int main(){
    int n,k;
    scanf("%d %d", &n, &k);
    printf("%d\n", n <= k ? 2 : (2*n + k - 1) / k);
    return 0;
}

/*
After the personal contest, happy but hungry programmers dropped into the restaurant “Ural Steaks” and ordered n specialty steaks. Each steak is cooked by frying each of its sides on a frying pan for one minute.
Unfortunately, the chef has only one frying pan, on which at most k steaks can be cooked simultaneously. Find the time the chef needs to cook the steaks.
Input
The only input line contains the integers n and k separated with a space (1 ≤ n, k ≤ 1000).
Output
Output the minimal number of minutes in which the chef can cook n steaks.
Example
input	output
3 2
3
*/