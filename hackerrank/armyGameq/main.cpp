#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
     SOLUTION

    The most optimal way is to put bombs in in corners(crossings) because in this case bomb covers 4 adjacent cells. If the bomb is not in a corner, but in the middle of some edge then we can move it to some corner and it still will cover this cell and maybe some new. So we make square of 2x2 put the bomb at the corner crossing.
    Now if n and m both are even then solution will be (n1*m1)/4
    if any of n or m is odd the solution will be (n1*m1)/4 + (n1 or m1)/2
    or if both are odd then solution will be (n1*m1)/4 + n1/2 + m1/2 + 1

    If we make a general case then solution will be (n+1)(m+1)/4
     */
    int n,m;
    cin >> n >> m;
    int result = 0;
    int nTemp=n/2, mTemp=m/2;
    result = nTemp*mTemp;
    int nMod,mMod;
    nMod  = (n-nTemp*2);
    mMod = (m-mTemp*2);
    if(nMod == 0 && mMod == 0){
    }
        
    else if( nMod==1 && mMod==0 )
    {
        result += m/2;
    }
    else if( nMod==0 && mMod==1 )
    {
        result += n/2;
    }
    else
    {
        result += n/2 + m/2 +1;
    }
    cout << result << endl;
}

/*
Luke is daydreaming in Math class. He has a sheet of graph paper with  rows and  columns, and he imagines that there is an army base in each cell for a total of  bases. He wants to drop supplies at strategic points on the sheet, marking each drop point with a red dot. If a base contains at least one package inside or on top of its border fence, then it's considered to be supplied. For example:

image

Given  and , what's the minimum number of packages that Luke must drop to supply all of his bases?

Input Format

Two space-separated integers describing the respective values of  and .

Constraints

Output Format

Print a single integer denoting the minimum number of supply packages Luke must drop.

Sample Input 0

2 2
Sample Output 0

1
Explanation 0

Luke has four bases in a  grid. If he drops a single package where the walls of all four bases intersect, then those four cells can access the package:

image

Because he managed to supply all four bases with a single supply drop, we print  as our answer.

*/