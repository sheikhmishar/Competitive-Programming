// time limit

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)==1){
        int m;
        cin >> m;
        int store[n];
        for(int count = 0; count < n; count++){
            int N;
            cin >> N;
            store[count] = N;
        }
        //for(int count = 0; count < (sizeof(store)/sizeof(store[0])); count++){
        //    cout << store[count] << endl;
        //}
        for(int count = 1; count <= m; count++){
                int occurance = 0, done=0;
                int test, check;
                cin >> test >> check;
                for(int occ = 0; occ < n; occ++){
                    done = 0;
                    if(store[occ] == check)
                        occurance++;
                    if(occurance == test){
                        cout << (occ+1) << endl;
                        done = 1;
                        break;
                    }
                }
                if(done != 1)
                    cout << 0 << endl;
            }
    }

    return 0;
}
/*
Though Rujia Liu usually sets hard problems for contests (for example, regional contests like
Xi’an 2006, Beijing 2007 and Wuhan 2009, or UVa OJ contests like Rujia Liu’s Presents 1
and 2), he occasionally sets easy problem (for example, ‘the Coco-Cola Store’ in UVa OJ),
to encourage more people to solve his problems :D
Given an array, your task is to find the k-th occurrence (from left to right) of an integer v. To make
the problem more difficult (and interesting!), you’ll have to answer m such queries.
Input
There are several test cases. The first line of each test case contains two integers n, m (1 ≤ n, m ≤
100, 000), the number of elements in the array, and the number of queries. The next line contains n
positive integers not larger than 1,000,000. Each of the following m lines contains two integer k and v
(1 ≤ k ≤ n, 1 ≤ v ≤ 1, 000, 000). The input is terminated by end-of-file (EOF).
Output
For each query, print the 1-based location of the occurrence. If there is no such element, output ‘0’
instead.
Sample Input
8 4
1 3 2 2 4 3 2 1
1 3
2 4
3 2
4 2
Sample Output
2
0
7
0
*/