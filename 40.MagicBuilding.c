//40. MagicBuilding
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int t,n,num, max = 0;
	int count[10001];
	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		max = 0;
		memset(count, 0, sizeof(count));
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &num);
			count[num]++;			
		}
		for (int i = 0; i < 10001; ++i)
		{
			if (count[i] > max)
			{
				max = count[i];
			}
		}
		printf("%d\n", max);
	}
	return 0;
}