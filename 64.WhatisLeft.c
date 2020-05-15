//WOJ1064-What is Left
#include<stdio.h>
#include<string.h>
int book[1000];
int main(){
	int n,i,num,s;
	while(scanf("%d",&n)!=EOF){
		memset(book,0,sizeof(book));
		s=1;
		for(i=0;i<n;i++){
			scanf("%d",&num);
			book[num]=1;
		}
		for(i=0;i<1000;i++){
			if(book[i]==1){
				if(s){
					printf("%d",i);
					s=0;
				}
				else{
					printf(" %d",i);
				}
			}
		}
		printf("\n");
	}
	return 0;
}