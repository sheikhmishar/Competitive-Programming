/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sheikhMishar00
 *
 * Created on October 11, 2018, 3:14 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main() {
    int T;
    cin >> T;
    for (int count = 1; count <= T; count++) {
        int x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2>>y2;
        if ((x1 - x2) == 0) {
            if (y2 > y1)
                cout << "up" << endl;
            else
                cout << "down" << endl;
        }
        else if ((y1 - y2) == 0) {
            if (x2 > x1)
                cout << "right" << endl;
            else
                cout << "left" << endl;
        }
        else {
            cout << "sad" << endl;
        }
    }
    return 0;
}

/*
Robot Bunny is lost. It wants to reach its home as soon as possible. Currently it is standing at coordinates (x1, y1) in 2-D plane. Its home is at coordinates (x2, y2). Bunny is extremely worried. Please help it by giving a command by telling the direction in which it should to go so as to reach its home. If you give it a direction, it will keep moving in that direction till it reaches its home. There are four possible directions you can give as command - "left", "right", "up", "down". It might be possible that you can't instruct the robot in such a way that it reaches its home. In that case, output "sad".

Input
First line of the input contains an integer T denoting the number of test cases. T test cases follow.

First line of each test case contains four space separated integers x1, y1, x2, y2.

Output
For each test case, output a single line containing "left" or "right" or "up" or "down" or "sad" (without quotes).

Constraints
1 ≤ T ≤ 5000
0 ≤ x1, y1, x2, y2. ≤ 100
It's guaranteed that the initial position of robot is not his home.
Example
Input
3
0 0 1 0
0 0 0 1
0 0 1 1

Output:
right
up
sad
Explanation
Test case 1. If you give Bunny the command to move to the right, it will reach its home.
*/