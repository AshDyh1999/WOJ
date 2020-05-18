//46. Crazy Game
#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int t,n;
	cin >> t;
	while(t--){
		cin>>n;
		int num[n] = {0};
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			cin>>num[i];
		}
		for (int i = 0; i < n; ++i)
		{
			for (int j = i+1; j < n; ++j)
			{
				if (num[i] > num[j])
				{
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}