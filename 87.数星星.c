//87.数星星
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	float x[301],y[301];
	while(cin>>n){
		if (n == 0)
		{
			break;
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>x[i]>>y[i];
		}
		int max = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				int sum = 2;
				for (int k = j+1; k < n; ++k)
				{
					if ((x[i] - x[j]) * (y[j] - y[k]) == (y[i] - y[j]) * (x[j] - x[k]))
					{
						sum ++;
					}
					if (sum > max)
					{
						max = sum;
					}
				}
			}
		}

		printf("%d\n", max);
	}
	return 0;
}