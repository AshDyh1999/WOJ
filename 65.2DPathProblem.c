//65. 2D Path Problem
#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

int main(){
    int n,x,y,sum,l;
    char a[5001];
    cin >> n;
    while(n--){
        cin >> a;
        l=strlen(a);
		x=0,y=0,sum=0;
        for( int i=0;i<l;i++){
            if(a[i]=='U'){
                y++;
            }
            else if(a[i]=='R'){
                sum+=y;
                x++;
            }
        }
        double res=(double)(x*y)/2;
        res-=sum;
        printf("%.3lf\n",res);
        // cout << res << endl;
    }
}