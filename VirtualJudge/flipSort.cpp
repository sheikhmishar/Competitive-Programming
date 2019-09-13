
#include <bits/stdc++.h>
//#include <cstring>

using namespace std;

int main(int argc, char** argv){
    int N,a[1000];

    while(scanf("%d",&N)==1){
        for(int i = 0;i<N;++i) scanf("%d",&a[i]);

        int result = 0;

        for(int count = 1;count<N;count++)
            for(int innerCount = 0;innerCount < count ;innerCount++)
                if(a[innerCount]>a[count])
                    result++;

        printf("Minimum exchange operations : %d\n",result);
    }

    return 0;
}

/*
Sorting in computer science is an important part. Almost every problem can be solved effeciently if
sorted data are found. There are some excellent sorting algorithm which has already acheived the lower
bound n · lg n. In this problem we will also discuss about a new sorting approach. In this approach
only one operation (Flip) is available and that is you can exchange two adjacent terms. If you think a
while, you will see that it is always possible to sort a set of numbers in this way.
A set of integers will be given. Now using the above approach we want to sort the numbers in
ascending order. You have to find out the minimum number of flips required. Such as to sort ‘1 2 3’
we need no flip operation whether to sort ‘2 3 1’ we need at least 2 flip operations.
Input
The input will start with a positive integer N (N ≤ 1000). In next few lines there will be N integers.
Input will be terminated by EOF.
Output
For each data set print ‘Minimum exchange operations : M’ where M is the minimum flip operations
required to perform sorting. Use a seperate line for each case.
Sample Input
3
1 2 3
3
2 3 1
Sample Output
Minimum exchange operations : 0
Minimum exchange operations : 2
*/