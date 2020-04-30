#include<stdio.h>
 
int main()
{
    int a[31]={10,31,11,22,19,19,26,20,25,27,
              30,35,11,41,21,33,15,26,11,25,
              33,29,11,34,36,50,21,49,33,37,24};   
    int b[3]={13,31,31}; 
    int i=0,j;
    char ch;
    while(1 == scanf("%c", &ch)); 
    for(i=0;i<31;i++)
      printf("1:%d %d\n",i+1,a[i]);
    for(j=0;j<3;j++)
      printf("2:%d %d\n",j+1,b[j]); 
    return 0;
} 