#include<stdio.h>
#include<string.h>
long long C(long long n,long long k){
	long long a = 1, b = 1;
	if(k > n-k){
		k = n - k;
	}
	for(int i = 1; i <= k; i++){
		a = a * ( n + 1 - i );
	}
	for(int i = 1; i <= k; i++){
		b = b * i;
	}
	return a/b;
} 

void calc(int n, long long *f){
	int x, i = 0;
	x=n/3;
	for(i=1;i<=x;i++)
	f[n]+=f[3*i-1]*f[n-3*i]*C(n-1,3*i-1);
	if(n%3!=1)
	f[n]+=f[n-1];
}

int main(int argc, char const *argv[]){
	long long answer[26] = {0};
	answer[1]=1;
	answer[2]=1;
	answer[3]=1;
	for(int i=4;i<=25;i++)
	{
		calc(i,answer);
	} 
	int n;
	while(scanf("%d",&n)==1)
	printf("%lld\n",answer[n]);

	return 0;
} 