//202. 找不同
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int num,res;
	cin>>num;
	int list[num * 2 + 1];
	for (int i = 0; i < num * 2 + 1; ++i)
	{
		cin>>list[i];
		res=list[i]^res;
	}
	cout<<res<<endl;

	return 0;
}