#include <stdio.h>
int res(int n,int m){
    int a=0;
    for(int i=2;i<=n;i++){
        a=(a+m)%i;
    }
    a = a + 1;
    return a; 
}
int main(){
    int m,n;
    while(scanf("%d %d",&n,&m)==2){
        if (m == 0 && n == 0)
        {
            break;
        }
        printf("%d\n",res(n,m));    
	}
    return 0;
}