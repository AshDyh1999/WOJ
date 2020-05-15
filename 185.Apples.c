//185. Apples
#include <stdio.h>

int res[101][101];

int main(int argc, char const *argv[])
{
	for (int i = 0; i < 101; ++i)
	{
		res[i][0] = 1;
		res[i][1] = 1;
		res[0][i] = 1;
		res[1][i] = 1;
	}
	for (int i = 2; i < 101; ++i)
	{
		for (int j = 2; j < 101; ++j)
		{
			if (i>=j)
			{
				res[i][j] = res[i-j][j] + res[i][j-1];
			}else{
				res[i][j] = res[i][i];
			}
		}
	}
	int m, n;
	while(scanf("%d %d",&m, &n) == 2){
		printf("%d\n", res[m][n]);
	}
	return 0;
}