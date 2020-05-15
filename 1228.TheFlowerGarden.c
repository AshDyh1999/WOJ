//WOJ1228-The Flower Garden
#include<stdio.h>

int main(int argc, char const *argv[])
{
	int sum,f,k,start,scope;
	while(scanf("%d %d", &f, &k)!= EOF){
		sum = 0;
		int data[k][2];
		for (int i = 0; i < k; ++i)
		{
			scanf("%d %d",&data[i][0],&data[i][1]);
		}
		int slot[f+1] = {0};
		for (int i = k - 1; i >= 0 ; i--)
		{	
			start = data[i][0];
			scope = data[i][1];
			for (int j = start; j <= f; j+=scope)
			{
				slot[j] = 1;
			}
		}
		for (int i = 1; i <= f; ++i)
		{
			sum += slot[i];
		}
		printf("%d\n", f - sum);

	}
	return 0;
}