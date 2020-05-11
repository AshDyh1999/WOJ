#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,answer,max;
int setN[1000];
while(scanf("%d",&n),n)
{
   for(i=0;i<n;i++)
   scanf("%d",&setN[i]);
   max=setN[0];
   for(i=1;i<n;i++)
    if(setN[i]>max)
     max=setN[i];
   answer=max;
   for(i=1;i<n;i++)
   {
    answer*=2;
    if(answer<0)//防止负数越界
     answer+=2006;
    answer%=2006;
   }
   if(answer<0)
    answer+=2006;
   printf("%d\n",answer%2006);
}
return 0;
}
