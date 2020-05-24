//12. Think And Count
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int row, col, ans;
	while(cin>>row>>col)
	{	
		char board[row][col];

		int line[row][col];
		int rect[row][col];
	    memset( line, 0, sizeof( line ) );
        memset( rect, 0, sizeof( rect ) );

        //将输入读入到数组board
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cin>>board[i][j];
			}
		}
wbwww  wbwww
10123  10111+  1 1 1+1  2+2   4+3 
bwbww  bwbww  
01012  01022  7 7  7  7+1+1 9+3+1
bbbbw  bbbbw
00001  00003

wbwww  10123
bwbww  01024
bbbbw  00003


ww
12
ww  
12

www 
123   1   1+2  3+3
www   
123   6+2 8+3
www
123

z： m = line[i][j-1], s： n = col[i-1][j]
dp[i][j] 标识从i,j以上所有白色方块数；
for (int i = 0; i < row; ++i)
{	
	for (int j = 0; j < col; ++j)
	{
		if (board[i][j] == 'w')
		{
			dp[i][j] = dp[i][j-1] + m + 1 + n + k
		}
		if (board[i][j] == 'b')
		{
			dp[i][j] = dp[i][j-1]; 
		}
	}
}

// 3 3  
// www www
// 123 123
// bww bww
// 012 024
// bbb bbb
// 000	

// wwwbw
// 11101
// ------> sum rect
// wbbbb
// 20000

//按行进行统计，line每一个元素代表以该白色方块为最右一块的单行白色矩阵个数
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (board[i][j] == 'w')
				{
					line[i][j] = line[i][j-1] + 1;
				}
			}
		}

		//全局统计，rect以每一个白色方块为右下角方块的白色矩阵个数 N^3
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				int min = line[i][j];
				for (int k = i; k <= row; ++k)
				{
					if (min == 0)
					{
						break;
					}
					if (line[k][j] < min)
					{
						min = line[k][j];
					}
					rect[k][j] += min;
				}
			}
		}

		ans = 0;
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				ans += rect[i][j];
			}
		}

		cout << ans << endl;
		//打印输出展示
		// for (int i = 0; i < row; ++i)
		// {
		// 	for (int j = 0; j < col; ++j)
		// 	{
		// 		cout<<board[i][j];
		// 	}
		// 	cout<<endl;
		// }
	}
	return 0;
}