#include <stdio.h>
#include <math.h>
#include<stdlib.h>
#include <string.h>

int max(int a, int b){
	int answer;
	if(a>b){
		answer = a;
	}else{
		answer = b;
	}
	return answer;
}

int main(){
	int num, capbility;
	int i, j;
	while((scanf("%d",&num)) != EOF){
		int value[num+1] = {0}, weight[num+1] = {0};
		for(i = 1; i <= num; i++){
			scanf("%d%d", &weight[i], &value[i]);
		}
		scanf("%d", &capbility);
		int dp[num+1][capbility+1];
		memset(dp, 0, sizeof(dp));
		for(i = 1; i<=num; i++){
			for ( j = 1; j <=capbility; j++)
			{
				if(j < weight[i]){
					dp[i][j] = dp[i-1][j];
				}else{
					dp[i][j] = max(dp[i-1][j], dp[i-1][j-weight[i]] + value[i]);
				}
			}
		}
		printf("%d\n", dp[num][capbility]);
	}
	return 0;
}