#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string t("ACM");
    if (strstr(s.c_str(), t.c_str())) {
        cout << "Fun!" << endl;
    }
    else
        cout << "boring..." << endl;
    return 0;
}
/*
Programming contests are fun! So fun in fact, that you find yourself browsing online through hundreds of programming-related tasks, checking if they are about competitive programming. As quite a few of those tasks were not what you were looking for, you were wondering if you could write a program that classifies the problems for you!

You figured out that the following classification works every time: If the task description mentions "ACM", then the task is about competitive programming and will thus be very fun to solve. Otherwise, the task is not.

Input
You are given the task description, consisting of only uppercase letters of the Latin alphabet (A through Z). It is guaranteed that there will be at least one and at most 106 characters.

Output
Print "Fun!" if the statement contains ACM, and "boring..." otherwise.

Examples
Input
SWISSSUBREGIONALACMICPC
Output
Fun!
Input
XXXAXCXMXXX
Output
boring...
*/