#include <cstdio>
#include <cstdlib>

using namespace std;

int main(){
    char s[5];
    int x,y;
    
    scanf("%s",s);
    x = atoi(s);
    
    scanf("%s",s);
    y = atoi(s);
    
    if(x % 2 == 0 || y % 2 == 1) puts("yes");
    else puts("no");
    
    return 0;
}
/*
The problem is from Timus Online Judge.

Den only has two locks. He never uses the same lock two days in a row. Therefore, if the thief wants to open the lock, he needs to guess the combination that happens to be used that night.

To solve this problem, we just have to emulate the situation iteratively. When the combination used by the thief is bigger than both, then it is impossible.

The following C++ code is straightforward to demonstrate the combination-guessing game.

*/
#include <iostream>
using namespace std;
 
int main()
{
    int code[2];
    cin >> code[0] >> code[1];
 
    int test = 0;
    int idx = 0;
    while (true)
    {
        if (test == code[idx])
        {
            cout << "yes" << endl;          
            break;      
        }       
        test ++; // combination used by theif       
        if ((test > code[0]) && (test > code[1]))
        {
            cout << "no" << endl;
            break;
        }
        idx = (idx + 1) % 2;
    }
 
    return (0);
}
/*
A Facebook friend suggests a quicker solution (and how come I didn’t think of this in the first place?)

If the first lock’s combination is an odd number and the second’s is an even number, then the thief won’t get the bicycle. It’s shorter and much faster than trying all 10,000 combinations.

Yes, pure math!

*/
#include <iostream>
using namespace std;
 
int main()
{
    int code[2];
    cin >> code[0] >> code[1];
    cout << (((code[0] % 2) == 0) || ((code[1] % 2) != 0) ? "yes" : "no");
    return (0);
}
/*
However, the test cases (only four digit combination, so the input range is small) are weak, both programs get AC in 0.031 s (roughly the same time).

Considering apply this to the same problem with larger input domain, the second one is obviously better, tex_3be74cac013d6997340f7ab8973bbd70 Coding Exercise - Timus Online Judge - 1877. Bicycle Codes - C++ solution algorithms beginner brute force c / c++ code implementation math programming languages  rather than the first approach tex_caa5d58969fcc95bcd6477b6782501fa Coding Exercise - Timus Online Judge - 1877. Bicycle Codes - C++ solution algorithms beginner brute force c / c++ code implementation math programming languages .
*/