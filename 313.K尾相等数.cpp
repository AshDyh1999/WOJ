//313. K尾相等数
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	
	// int a = (int)pow(2,31) % 1000;
	// printf("%d\n", a);
	int k;
	while(cin>>k){
		if (k == 0)
		{
			break;
		}
		
		int m = 1,n;
		int rest_list[1000] ;
		for (int i = 0; i < 1000; ++i)
		{
			rest_list[i] = -1;
		}
		int rest;
		while((int)pow(k,m) < 1000){
			m++;
		}
		// printf("%d\n", m); 
		rest = (int)pow(k,m) % 1000;
		rest_list[rest] = m;
		while(1){
			m++;
			rest = rest*(k%1000)%1000;//核心操作，不然会溢出
			if (rest_list[rest] == -1)
			{
				rest_list[rest] = m;
			}else{
				n = m;
				m = rest_list[rest];
				break;
			}
		}
		printf("%d\n", m+n);
	}
	return 0;
}
