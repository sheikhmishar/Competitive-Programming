/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sheikhMishar00
 *
 * Created on October 10, 2018, 6:13 PM
 */

#include <bits/stdc++.h>
#include <vector>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    unsigned long long int Ai;
    vector<unsigned long long int> store;
    while(cin >> Ai){
        store.push_back(Ai);
    }
    
    for(int count = store.size() - 1; count >= 0; count--){
        printf("%.4lf\n",sqrt(store[count]));
    }

    return 0;
}

/*
The problem is so easy, that the authors were lazy to write a statement for it!
Input
The input stream contains a set of integer numbers Ai (0 ≤ Ai ≤ 10 18). The numbers are separated by any number of spaces and line breaks. A size of the input stream does not exceed 256 KB.
Output
For each number Ai from the last one till the first one you should output its square root. Each square root should be printed in a separate line with at least four digits after decimal point.
Example
input	output
 1427  0   

   876652098643267843 
5276538
  
   
2297.0716
936297014.1164
0.0000
37.7757
*/