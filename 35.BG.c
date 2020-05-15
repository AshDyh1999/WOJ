//35.BG.c
#include <stdio.h>

int main() {
	int n,res;
	while(1) {
		scanf("%d",&n);
		if(n==0)
			break;
		if (n%2 == 0)
		{
			res = n/2;
		}else{
			res = (n+1)/2;
		}
		printf("%d\n",res);
	}
	return 0;
}