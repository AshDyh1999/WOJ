//351. Olympic
#include<stdio.h>
int main(){
	int month[9]={0,31,29,31,30,31,30,31,8};
	int t,m,d,sum;
	scanf("%d",&t);
	while(t--){
		sum=0;
		scanf("%d %d",&m,&d);
		for(int i=m;i<=8;i++){
			if(i==m)
			sum+=month[i]-d;
			else
			sum+=month[i];
		}
		printf("%d\n",sum);
	}
	return 0;
} 