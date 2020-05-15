//291. 『不一样』的字符串
#include<stdio.h>
#include<string.h>
char str[100002];

int maxnum(int a, int b){
	return a>b?a:b;
}
int main(int argc, char const *argv[])
{	
	char str[100001];
	int position[300];
	int len;
	while(scanf("%s",&str)!=EOF){
		if (strcmp("#", str) == 0)
		{
			break;
		}
		len = strlen(str);
		memset(position, 0, sizeof(position));
		int start = 1;
		int max = 0;
		int flag = 0;
		for (int i = 1; i <= len; ++i)
		{
			if (position[str[i-1]] != 0)
			{
				flag = maxnum(flag, position[str[i-1]]);
			}
			if ((i - flag) > max)
			{
				start = flag + 1;
				max = i - flag;
			}
			position[str[i-1]] = i;
		}
		printf("%d ",max);
    	for(int i=start;i<start+max;i++)printf("%c",str[i-1]);
    	printf("\n"); 
	}
	return 0;
}