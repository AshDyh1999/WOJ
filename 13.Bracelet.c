//13. Bracelet
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int compare(const void *i, const void *j)
{
    return strcmp((char *)i, (char *)j);
}

int main(int argc, char const *argv[])
{
    string input;
    while(cin>>input){
        int len = input.length();
        char str[101][101];
        for (int i = 0; i < len; ++i)
        {
            for (int j = 0; j < len; ++j)
            {
                str[i][j] = input[(j+i)%len];
            }
            str[i][len] = '\0';
        }
        qsort(str, len, sizeof(str[0]), compare);
        printf("%s\n", str[0]);
    }
    return 0;
}