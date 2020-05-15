//204.继续找相同
#include <stdio.h>
#include <string.h>
int num[500007];
int main(int argc, char const *argv[])
{
    int n, count, ans, sp;
    while(scanf("%d", &n) != EOF){
        sp = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &num[i]);
            if (sp == 0)
            {
                sp++;
                ans=num[i];
            }
            else if (ans == num[i])
            {
                sp++;
            }
            else{
                sp--;
            }
        }
        if (sp > 0)
        {
            printf("%d\n", ans);
        }else{
            int a = 0, b = 0, t = num[n-1];
            for (int i = 0; i < n; ++i)
            {
                if (num[i] == ans)
                {
                    a++;
                }
                else if(num[i] == t){
                    b++;
                }
            }
            if (a > b)
            {
                printf("%d\n", ans);
            }else{
                printf("%d\n", t);
            }
        }        
    }
    return 0;
}