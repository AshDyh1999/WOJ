//290. Exchange
#include <stdio.h>
int a[10000];

int main(int argc, char const *argv[])
{
	int n,res,temp;
	while(scanf("%d", &n) != EOF){
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &a[i]);
		}
		res = 0;
		for (int i = 0; i < n-1; ++i)
		{
			for (int j = 0; j < n-1-i; ++j)
			{
				if (a[j] > a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
					res ++;
 				}
			}
		}
		printf("%d\n", res);

	}
	return 0;
}