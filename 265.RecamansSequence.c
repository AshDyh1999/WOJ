//265. Recaman's Sequence
#include <stdio.h>
long a[500000] = {0};
int calc(int k){
	int a_pre, flag , res, start;
	//优化处理
	for (int i = 1; i < 500000; ++i)
	{
		if (a[i] == 0)
		{	
			start = i;
			a_pre = a[i-1];
			break;
		}
	}
	for (int i = start; i <= k; ++i)
	{
		res = a_pre - i;
		flag = 0;
		for (int j = 0; j < i; ++j)
		{
			if (res == a[j])
			{
				flag = 1;
				break;
			}
		}
		if (res <= 0 || flag ==1)
		{
			res = a_pre + i;
		}
		a_pre = res;
		a[i] = res;
	}
}
int main(int argc, char const *argv[])
{
	int k,max = 0;
	while(scanf("%d",&k) != EOF){
		if (k == -1)
		{
			break;
		}
		if (k > max)
		{
			max = k;
			calc(k);
		}
		printf("%ld\n", a[k]);
	}
	return 0;
}