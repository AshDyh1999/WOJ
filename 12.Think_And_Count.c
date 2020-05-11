//12. Think And Count
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int row, col;
	while(cin>>row>>col)
	{	
		char board[row][col];
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cin>>board[i][j];
			}
		}
		

		//打印输出展示
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout<<board[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}