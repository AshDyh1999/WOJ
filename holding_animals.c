#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
int max(int n, int m)
{
    int t;
    t = n > m ? n : m;
    return t;
} 
 
int main()
{
    int bp[100001];
    int m, rest, w[101], val[101];
    while((scanf("%d",&m)) != EOF)
    {
          int i,j;
          for(j = 0; j < m; j++)
          {
                scanf("%d%d",&w[j],&val[j]);
          }
          scanf("%d", &rest); 
          memset(bp, 0, sizeof(bp));
          for(i = 0; i < m; i++)
          {
                for(j = rest; j > -1; j--)
                {
                      if(j >= w[i])
                      { 
                            bp[j] = max(bp[j], bp[j-w[i]] + val[i]);
                      }
                }
          }
            printf("%d\n",bp[rest]); 
    } 
    return 0;
} 