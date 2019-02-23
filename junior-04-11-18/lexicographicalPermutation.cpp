#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;

int chPriority[124];

bool ascendingSorter(char ch1, char ch2) {
    return (chPriority[ch1] < chPriority[ch2]);
}

int main() {
    int T;
    cin >> T;
    //cout << (int)A;
    int lexicography = 0; //I mean, lexicographical order
    for (int i = (int) 'A'; i <= (int) 'Z'; i++) {
        chPriority[i] = lexicography;
        lexicography += 2;
    }
    lexicography = 1;
    for (int i = (int) 'a'; i <= (int) 'z'; i++) {
        chPriority[i] = lexicography;
        lexicography += 2;
    }
    while (T--) {
        string S;
        cin >> S;
        sort(S.begin(), S.end(), ascendingSorter);
        do {
            cout << S << endl;
        } while (next_permutation(S.begin(), S.end(), ascendingSorter));
    }
    return 0;
}

/*
You are to write a program that has to generate all possible words from a given set of letters.
Example: Given the word “abc”, your program should — by exploring all different combination of
the three letters — output the words “abc”, “acb”, “bac”, “bca”, “cab” and “cba”.
In the word taken from the input file, some letters may appear more than once. For a given word,
your program should not produce the same word more than once, and the words should be output in
alphabetically ascending order.
Input
The input file consists of several words. The first line contains a number giving the number of words to
follow. Each following line contains one word. A word consists of uppercase or lowercase letters from
‘A’ to ‘Z’. Uppercase and lowercase letters are to be considered different.
Output
For each word in the input file, the output file should contain all different words that can be generated
with the letters of the given word. The words generated from the same input word should be output in
alphabetically ascending order. An upper case letter goes before the corresponding lower case letter.
Sample Input
3
aAb
abc
acba
Sample Output
Aab
Aba
aAb
abA
bAa
baA
abc
acb
bac
bca
cab
cba
aabc
aacb
abac
abca
acab
acba
baac
baca
bcaa
caab
caba
cbaa
*/