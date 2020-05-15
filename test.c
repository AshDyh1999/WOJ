#include<stdio.h>
#include<string.h>
char buf[128];
int length;
int main(){
    int a = 10 , b = -3;
    printf("%d/%d = %d\n", a, b, a/b);
    printf("%dmod%d = %d\n", a, b, a%b);
    a = -10 , b = 3;
    printf("%d/%d = %d\n", a, b, a/b);
    printf("%dmod%d = %d\n", a, b, a%b);
    a = -10 , b = -3;
    printf("%d/%d = %d\n", a, b, a/b);
    printf("%dmod%d = %d\n", a, b, a%b);
    return 0;
}