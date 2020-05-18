//406. InternetServiceProviders
#include<stdio.h>
int main() {
	int n,c,res;
	float temp;
	while(scanf("%d %d",&n,&c)!=EOF){
		if(n==0 || c==0){
			res = 0;
		   	printf("%d\n",res);
		}else{
			temp=(float)(c/(2.0*n));
			res=temp;
			// res	= (c/(2.0*n));
			if(temp-res<=0.5){
				printf("%d\n",res);
			}else{
				printf("%d\n",res+1);
			}
			// printf("%d\n", res);
		}
	}
	return 0;
}