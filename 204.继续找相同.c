//204.继续找相同
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int num[500007];

int main(int argc, char const *argv[])
{
    int n, count, ans, sp;
    while(cin >> n)
    {
        sp = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> num[i];

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
            cout << ans << endl;
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
                cout << ans << endl;
            }else{
                cout << t << endl;
            }
        }        
    }
    return 0;
}