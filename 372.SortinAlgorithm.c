//372. Sorting Algorithm

#include<stdio.h>
#include<algorithm>
using namespace std;


int main(){
	int i,j,k;
	int num[100001];
    int m,n;
	while(scanf("%d%d",&n,&m)!=EOF){
		if(n==0 && m==0){
			break;
		}
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		sort(num,num+n);

		for(int i=0;i<n;i=i+m){
			if(i==0){
				printf("%d",num[i]);
			}
			else{
				printf(" %d",num[i]);
			}
		}
		printf("\n");
	}
	return 0;
} 