#include<stdio.h>
#include<string.h>

int main()
{
    char s[7][10]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    int mm[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
    int day,y,m,xq;
    while(scanf("%d",&day) != EOF)
    {
        if(day==-1)
            break;
        y = 2000;
        m = 1;
        day++;
        xq = (5 + day % 7) % 7;
        while(day>365)
        {
            if(day-365==0)
                break;
            if((y%4==0&&y%100!=0)||y%400==0)
            {
                if(day-366==0)
                    break;
                day--;
            }
            day -= 365;
            y++;
        }
        if((y%4==0&&y%100!=0)||y%400==0)//闰年二月份29天
            mm[2]++;
        for(m=1;m<=12;m++)
        {
            if(day-mm[m]<=0)//若剩余天数比该月总天数小或相等，则其月份就确定了
                break;
            day-=mm[m];
        }
        printf("%d-%02d-%02d %s\n",y,m,day,s[xq]);
        mm[2] = 28;
    }
    return 0;
}