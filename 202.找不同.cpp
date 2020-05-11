//202. 找不同
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num;
	cin>>num;
	int list[num * 2 + 1];
	for (int i = 0; i < num * 2 + 1; ++i)
	{
		cin>>list[i];
	}
	// cout<<list[0]<<list[1]<<list[2]<<endl;
	int flag;
	for (int i = 0; i < num * 2 + 1; ++i)
	{	flag = 0;
		for (int j = 0; j < num * 2 + 1; ++j)
		{
			if(list[i] == list[j] && i != j){
				flag ++;
				// continue;
				break;
			}
		}
		if (flag == 0)
		{
			printf("%d\n", list[i]);
			break;
		}
	}
	return 0;
}