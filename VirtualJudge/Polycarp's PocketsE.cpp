#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[100] = {0};
  int ans = 0;
  for (int count = 1; count <= n; count++) {
    int i;
    cin >> i;
    a[i - 1] += 1;
    if(ans < a[i-1]){
       ans = a[i-1];
    }
  }
  cout << ans << "\n";
  return 0;
}

/*
Polycarp has n coins, the value of the i-th coin is ai. Polycarp wants to distribute all the coins between his pockets, but he cannot put two coins with the same value into the same pocket.

For example, if Polycarp has got six coins represented as an array a=[1,2,4,3,3,2], he can distribute the coins into two pockets as follows: [1,2,3],[2,3,4].

Polycarp wants to distribute all the coins with the minimum number of used pockets. Help him to do that.

Input
The first line of the input contains one integer n (1≤n≤100) — the number of coins.

The second line of the input contains n integers a1,a2,…,an (1≤ai≤100) — values of coins.

Output
Print only one integer — the minimum number of pockets Polycarp needs to distribute all the coins so no two coins with the same value are put into the same pocket.

Examples
Input
6
1 2 4 3 3 2
Output
2
Input
1
100
Output
1
*/