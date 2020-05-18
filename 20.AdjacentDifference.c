//20. Adjacent Difference
#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int T,n,temp,count = 0;
	scanf("%d", &T);
	temp = T;
	while(T--){
		count ++;
		scanf("%d", &n);
		int num[n] = {0}, out[n] ={0};
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &num[i]);
		}
		// for (int i = n -1; i > 1 ; --i)
		// {
		// 	num[i] = num[i] - num[i-1];
		// }
		out[0] = num[0];
		for (int i = 1; i < n; ++i)
		{
			out[i] = num[i] - num[i-1];
		}
		sort(out, out+n);
		printf("Case %d:\n",count);
		for (int i = 0; i < n; ++i)
		{
			printf("%d", out[i]);
			if(i!=n-1)
			printf(" ");
		}
		if (count != temp)
		{
			printf("\n\n");
		}
	}
	return 0;
}