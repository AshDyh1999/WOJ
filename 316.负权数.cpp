//316.负权数
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
char answer[100];
void ten2n(int num, int scale){
	int rest;
	int render,count=0;
	int ascii;
	// char answer[1000];
	while(1){
		rest = num%scale;
		render = num/scale;
		if (rest < 0)
		{	
			render ++;
			rest = num - render*scale;
		}
		if (rest >= 10)
		{
			ascii = rest - 10 + 65;
		}else{
			ascii = rest;
		}
		// printf("%d\n", rest);
		// printf("%c\n", ascii);
		answer[count] = ascii;
		num = render;
		// printf("%d\n", render);
		if (render < abs(scale) && render >= 0)
		{	
			if (render!=0)
			{
				count++;
				answer[count] = render;
			}
			break;
		}
		count++;
	}
	for (int i = count; i >= 0; i--)
	{	if (answer[i] >= 10)
		{
			printf("%c", answer[i]);
		}else{
			printf("%d", answer[i]);
		}
	}
	printf("\n");
	return;
}
int main(int argc, char const *argv[])
{
	int num,scale;
	while(cin>>num>>scale){
		if (num == 0 && scale == 0)
		{
			break;
		}
		if(num == 0)// 0 is special
        {
            printf("0\n");
            continue;
        }
		ten2n(num,scale);
	}
	// ten2n(-15, -2);
	// ten2n(-25000, -16);
	return 0;
}
