
#include <stdio.h>

#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))

int main(void)
{
	int numCases;

	scanf("%d", &numCases);

	for(int i = 0; i < numCases; i++)
	{
		int m,n, solution = 0;
		scanf("%d %d", &m, &n);

		if( m == 1 || n == 1)
		{
			solution =  MAX(m,n);
		}
		else if( m == 2 || n == 2)
		{
			solution = ( MAX(m,n) / 4 ) * 4;

			if( MAX(m,n) % 4 == 1)
			{
				solution+=2;
			}
			else if( MAX(m,n) % 4 > 1)
			{
				solution+=4;
			}
		}
		else
		{
			solution = (( m * n ) + 1 ) / 2; 
		}

		printf("Case %d: %d\n", i + 1, solution);

	}	

}


// Problem:  Knights in Chessboard
// Author: Michael Feliciano
// Goal: Given a m x n chessboard determine the maximum numbers of knights that can
// be placed on the board such that no two knights attack each other.

// Approach: When I first looked at this problem I thought of other chess related
// problem I had seen before and how many of them could be solved by a closed form
// mathematical formula. After a little research I found that there exists a formula
// for the general problem where the board can be n x n

// Read about it here: http://mathworld.wolfram.com/KnightsProblem.html

// but this variant allowed the board to be m x n so this specific formula
// wasn't sufficient to solve all cases. After drawing a few board configurations
// on paper I managed to break all cases into one of a few categories. 

// First Category: If either m or n was 1 we were dealing with a long skinny
// board in which no knights could attack each other so it was fair to populate
// each cell. In the code I check if either m or n is one and if so I output MAX(m,n)

// Second Category: If either m or n was 2 the maximum number of knights followed 
// a specific pattern that the maximum number of knights to be as many 2x2 groups
// of knights that could be fit onto the board given that they were separated by
// 2x2 groups of spaces and an extra 2 of after all 2x2 groups of knights were 
// placed there existed still a 2x1 space above the separating 2x2 blanks. 
// See captivating visualization below:

// K K O O K K O O K       For a 2x9 board 10 is the maximum
// K K O O K K O O K

// A Mathematical representation is seen below in the code. 

// Third Category: If the n and m didnt fit any of the other categories
// the answer seeemed to always be rows * columns + 1) / 2


// Difficulty: Medium Easy 
// Tags: Discrete Math, Combinatorics 
// Problem Link: http://www.lightoj.com/volume_showproblem.php?problem=1006

/*
Given an m x n chessboard where you want to place chess knights. You have to find the number of maximum knights that can be placed in the chessboard such that no two knights attack each other.

Those who are not familiar with chess knights, note that a chess knight can attack 8 positions in the board as shown in the picture below.



Input
Input starts with an integer T (≤ 41000), denoting the number of test cases.

Each case contains two integers m, n (1 ≤ m, n ≤ 200). Here m and n corresponds to the number of rows and the number of columns of the board respectively.

Output
For each case, print the case number and maximum number of knights that can be placed in the board considering the above restrictions.

Sample Input
3

8 8

3 7

4 10

Sample Output
Case 1: 32

Case 2: 11

Case 3: 20
*/