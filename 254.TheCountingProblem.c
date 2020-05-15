#include <stdio.h>

long long b[12] = { 1, 10, 100, 1000, 10000, 100000, 1000000,10000000, 100000000, 1000000000, 10000000000, 100000000000 };
long long count_num (long long n,long long id ) {
	long long left, m, sum = 0;
	for ( int i = 1; i < 12; i++ ) {
		left = n / b[i] - (id==0);
		sum += left * b[i-1];
		m = (n % b[i] - n % b[i-1]) / b[i-1];
		if ( m > id ) sum += b[i-1];
		else if ( m == id ) sum += n % b[i-1] + 1;
		if ( n < b[i] ) break;
	}
	return sum;
}
int main() {
	long long n,m,f,a[10];
	int i;
	while(scanf("%ld%ld",&n,&m)) {
		if (n == 0 && m == 0)
		{
			break;
		}
		if(n>m) {
			f=n;
			n=m;
			m=f;
		}
		for(i=0; i<=9; i++) {
			a[i]=count_num(m,i)-count_num(n-1,i);
		}
		for(i=0; i<9; i++) {
			printf("%ld ", a[i]);
		}
		printf("%ld\n", a[9]);
	}
}