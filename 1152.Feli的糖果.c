//152.Feli的糖果
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
int list[5000001];
int main(int argc, char const *argv[])
{
	int n,k;
	while(cin>>n>>k){
		int input[n];
		memset(list, 0, sizeof(list));
		for (int i = 0; i < n; ++i)
		{
			cin>>input[i];
			list[input[i]]++;
		}
		int num = 0;
		for (int i = 0; i < sizeof(list); ++i)
		{
			num+=list[i];
			if (num >= k)
			{
				printf("%d\n", i);
				break;
			}
		}
	}
	return 0;
}
