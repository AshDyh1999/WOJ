//WOJ1315-高级机密
#include<stdio.h>
#include<iostream>
using namespace std;

long long result(long long a,long long b,long long c){
    long long tmp=1;
    while(b>=1){
        if(b%2==1){
            tmp=a*tmp%c;
        }
        a=a*a%c;
        b=b/2;
	}
    return tmp;
}
int main(){
    long long a,b,c;
    while(cin >> a >> b >> c){
        if(a==0 && b==0 && c==0){
            break;    
        }
        cout << result(a,b,c) << endl;
	}
    return 0;
}