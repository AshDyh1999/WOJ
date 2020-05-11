//203. 找相同
#include <stdio.h>
#include <string.h>
// #include <iostream>
// using namespace std;
int input[5000000];
int main(int argc, char const *argv[])
{
	int num;
	while(scanf("%d",&num)!=EOF){
		int list[num];
		// int input[num];
		memset(input, 0, sizeof(input));
		for (int i = 0; i < num; ++i)
		{
			scanf("%d",&list[i]);
			input[list[i]]++;
		}
		for (int i = 0; i < num; ++i)
		{
			if (input[list[i]] > num/2)
			{
				printf("%d\n",list[i]);
				break;
			}
		}
	}
	return 0;
}