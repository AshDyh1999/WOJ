#include<stdio.h>
int main(){
	int n,in;
	float p,out;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&in);
		getchar();
		p=(float)in/100;
		out=(float)p*p/(1-2*p+2*p*p)*100;
		printf("%.2f",out);
		printf("%c\n", '%');
		n--;
	}
	return 0;
} 