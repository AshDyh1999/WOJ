//288.改变字符串
#include <stdio.h>
#include <string.h>
#include <algorithm>

// #include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,k;
	scanf("%d", &t);
	char a[10001],b[10001];
	// string a, b;

	while(t--){
		scanf("%s", &a);
		scanf("%s", &b);
		scanf("%d", &k);
		int len = strlen(a);
		// int len = a.length();
		int ss[len];
		int res = 0;
		for (int i = 0; i < len; ++i)
		{
			ss[i] = (b[i] > a[i]?(b[i]-a[i]) : (a[i]-b[i]));
			res	+= ss[i];
		}
		sort(ss,ss+len);
		for (int i = len-1; i > len -1 -k; --i)
		{
			res -= (ss[i] == 0)? -1: ss[i];
		}
		printf("%d\n", res);
	}
	return 0;
}