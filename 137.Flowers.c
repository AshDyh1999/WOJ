//137. Flowers
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n, m, price, min = 100000;
	while(scanf("%d%d", &n, &m) != EOF){
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &price);
			if (price < min)
			{
				min = price;
			}
		}
		printf("%d\n", m/min);
	}
	return 0;
}