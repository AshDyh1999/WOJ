//58. Exchange

#include <stdio.h>
int main(){
    long long a,b,t,res;
    while(scanf("%lld",&t)){
    	if (t == 0)
    	{
    		break;
    	}
        res=0;      
        for(a=t/3;a>=0;a--){ 
            b=(t-a*3)/2+1; 
            res+=b; 
        }
        printf("%lld\n",res);
    }
}