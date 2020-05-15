//170. Sorting
#include <stdio.h>
#include <string.h>
int set[300000001];
int main(int argc, char const *argv[])
{
	int num[1000000];
	memset(num,0,sizeof(num));
	int count = 0;
	while(1){
		scanf("%d", &num[count]);
		if (num[count] == 0)
		{
			break;
		}
		set[num[count]] = 1;
		count++;
	}
	for (int i = 0; i < 300000001; ++i)
	{
		if(set[i] != 0){
			printf("%d ", i);
		}
	}
	return 0;
}