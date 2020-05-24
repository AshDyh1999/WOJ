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
		
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cin>>board[i][j];
			}
		}
		//按行进行统计
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
		//全局统计
		// for (int i = 0; i < row; ++i)
		// {
		// 	for (int j = 0; j < col; ++j)
		// 	{
		// 		int min = line[i][j];
		// 		for (int k = i; k <= row; ++k)
		// 		{
		// 			if (min == 0)
		// 			{
		// 				break;
		// 			}
		// 			if (line[k][j] < min)
		// 			{
		// 				min = line[k][j];
		// 			}
		// 			rect[k][j] += min;
		// 		}
		// 	}
		// }
		//全局统计
		for (int j = 0; j < col; ++j)
		{	int min = line[1][j];
			for (int i = 0; i < row; ++i)
			{
				if (min == 0)
				{
				    i++;
				}
				if (line[i][j] < min)
				{
					min  = line[i][j];
				}
				rect[i][j] += min;
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