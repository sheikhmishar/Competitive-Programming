/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sheikhMishar00
 *
 * Created on October 20, 2018, 2:47 PM
 */

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--){
        int M, N;
        cin >> M >> N;
        int copyOfLength = M;
        while(1){
            if(M%copyOfLength == 0 && N%copyOfLength == 0)
                break;
            copyOfLength--;
        }
        cout << (M*N)/(copyOfLength*copyOfLength) << endl;
    }
    return 0;
}

/*
 Santosh has a farm at Byteland. He has a very big family to look after. His life takes a sudden turn and he runs into a financial crisis. After giving all the money he has in his hand, he decides to sell some parts of his plots. The specialty of his plot is that it is rectangular in nature. Santosh comes to know that he will get more money if he sells square shaped plots. So keeping this in mind, he decides to divide his plot into minimum possible square plots so that he can get maximum profit out of this.

So your task is to find the minimum number of square plots that can be formed out of the rectangular plot.

Input
The input consists of T number of test cases. T lines follow. Each line consists of two integers N and M which denotes the length and breadth of the rectangle.

Output
Output is a single line which denotes the minimum number of square plots that can be formed

Constraints
1<=T<=20 
1<=M<=10000 
1<=N<=10000 
Input:
2
10 15
4 6

Output:
6
6
 
 */