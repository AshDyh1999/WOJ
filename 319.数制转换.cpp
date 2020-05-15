//319. 数制转换
#include<stdio.h>
#include<string.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	int n, num;
	scanf("%d", &n);
	// printf("n = %d\n", n);
	while(n--){
		scanf("%d", &num);
		if (num == 0)
		{
			printf("0\n");
			continue;
		}
		int result[1000];
		int rest,quotient,count = 0;
		rest = num%3;
		quotient= num/3;
		if (rest > 1)
		{
			rest -= 3;
			result[0] = rest;
			quotient = (num - rest)/3;
		}else if (rest < -1)		
		{
			rest += 3;
			result[0] = rest;
			quotient = (num - rest)/3;
		}else{
			result[0] = rest;
		}
		num = quotient;

		while( abs(quotient) >= 2){
			count ++;
			rest = num%3;
			quotient= num/3;
			if (rest > 1)
			{
				rest -= 3;
				result[count] = rest;
				quotient = (num - rest)/3;
			}else if (rest < -1)		
			{
				rest += 3;
				result[count] = rest;
				quotient = (num - rest)/3;
			}else{
				result[count] = rest;
			}
			num = quotient;
		}
		count ++;
		result[count] = quotient;
		// printf("count = %d\n", count);
		if (result[count] == 0)
		{
			count--;
		}
		for (int i = count; i >= 0; i--)
		{	
			if (result[i] == -1)
			{
				printf("%c", '-');
			}else if(result[i] == 1){
				printf("%c", '1');
			}else{
				printf("%c", '0');
			}
			// printf("%d", result[i]);
		}
		printf("\n");
	}
	return 0;
}