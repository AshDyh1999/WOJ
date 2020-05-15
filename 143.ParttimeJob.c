//143. Part-time Job
#include <stdio.h>

int main(int argc, char const *argv[])
{
	int p, m, n, ans;
	while(scanf("%d%d%d", &m, &p, &n) == 3){
		if (p == 0 && m == 0 && n ==0)
		{
			break;
		}
		if (p * n < m)
		{
			ans = m;
		}else{
			ans = p * n;
		}
		printf("%d\n", ans);

	}
	return 0;
}