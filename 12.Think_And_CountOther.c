#include <stdio.h>
#include <string.h>

int main()
{
    char in[2001];
    long sign[2001], i, min, sum[2001], pre[2001], j, k, n, m, s, p;
    long long out;
    while (scanf("%ld %ld\n", &n, &m) != EOF)
    {
        for (i = 1; i <= m; i++)
            sign[i] = 0;
        for (s = 1, out = 0; s <= n; s++)
        {
            gets(in);
            for (i = 0; i < m; i++)//记录第i列到s行连续出现的白方块数,滚动数组1,处理单列上的白方块总数
            {
                if (in[i] == 'w')
                    sign[i + 1]++;
                else
                    sign[i + 1] = 0;
            }

            sign[0] = 0;
            pre[0] = 0;
            for (i = 1; i <= m; i++)
            {
                if (sign[i] >= sign[i - 1])//如果比前列的白方块数多,可以直接加入
                {
                    sum[i] = sum[i - 1] + sign[i];//滚动数组2,记录前i列的白方块总数
                    pre[i] = 0;
                }
                else
                {
                    pre[i] = pre[i - 1] + 1;
                    p = i - pre[i];
                    while (p > 0 && sign[p - 1] >= sign[i])//找出比这列sign[]小的列
                        p = p - pre[p - 1] - 1;

                    if (p <= 0)//这列sign[]值最小
                    {
                        sum[i] = sign[i] * i;
                        pre[i] = 0;
                    }
                    else//p列sign[]值最小
                    {
                        sum[i] = sign[i] * (i - p + 1) + sum[p - 1];
                        pre[i] = i - p - 1;
                    }
                }
                out += sum[i];
            }

            for (int i = 1; i <= m; ++i)
            {
                printf("%d ", sum[i]);
            }
        }
        printf("%lld\n", out);
    }
    return 0;
}
