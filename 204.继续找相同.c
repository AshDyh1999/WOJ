//204.继续找相同
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    while(scanf("%d",&num)!=EOF)
    {
        int ans, count = 1, tmp;
        scanf("%d",&ans);
        // cin>>ans;
        num--;
        while(num--)
        {
            scanf("%d",&tmp);
            // cin>>tmp;
            if(ans==tmp){
            	count++;
            }
            else{
            	count--;
            }
            if(count==0){
            	ans=tmp;
            	count=1;
        	}
    	}
    	printf("%d\n", ans);
	}
}
