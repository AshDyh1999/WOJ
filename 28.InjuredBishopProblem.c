//28.InjuredBishopProblem
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(void){
    int result, start[2], end[2];
    int t,N,count = 0;
    scanf("%d", &t);
    while(t--){
    	count++;
        scanf("%d", &N);
        scanf("%d %d", &start[0], &start[1]);
        scanf("%d %d", &end[0], &end[1]);
    	if (abs(start[0] - end[0])%2 == abs(start[1] - end[1]) % 2)
	    {
	    	if (abs(start[0] - end[0]) <= abs(start[1] - end[1]))
	    	{
	    		result = abs(start[1] - end[1]);
	    	}else{
	    		result = abs(start[0] - end[0]);
	    	}
	    } else{
	    	result = -1;
	    }  
	    if(count != 1)printf("\n");
        printf("Case %d:\n%d\n",count, result);
    }

    return 0;
}