//123. Bishops
#include<stdio.h>
long n;
int main(){
    while(scanf("%ld",&n)!=EOF){
    	if(n==1)
    	printf("1\n");
    	else
    	printf("%ld\n",2*n-2);
    }
    return 0;
}