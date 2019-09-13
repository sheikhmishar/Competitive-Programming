#include <bits/stdc++.h>
#include <bitset>
using namespace std;

bitset<1000000001> storeArray;

int main() {
  long long n; 
  cin >> n;
  for (long long i = 1; (i*(i+1))/2 < n; i++) 
           storeArray[(i*(i+1))/2] = true;
  for (long long i = 1; (i*(i+1))/2 < n; i++) {
    if (storeArray[(i*(i+1))/2] && storeArray[n-((i*(i+1))/2)]) {
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}

/*
As you very well know, this year's funkiest numbers are so called triangular numbers (that is, integers that are representable as k(k+1)/2, where k is some positive integer), and the coolest numbers are those that are representable as a sum of two triangular numbers.

A well-known hipster Andrew adores everything funky and cool but unfortunately, he isn't good at maths. Given number n, help him define whether this number can be represented by a sum of two triangular numbers (not necessarily different)!

Input
The first input line contains an integer n (1???n???109).

Output
Print "YES" (without the quotes), if n can be represented as a sum of two triangular numbers, otherwise print "NO" (without the quotes).

Examples
Input
256
Output
YES
Input
512
Output
NO
Note
In the first sample number .

In the second sample number 512 can not be represented as a sum of two triangular numbers.
*/