//300. Stone
#include<stdio.h>
#include <iostream>
using namespace std;
int main(){
    int c,n;
    cin>>c;
    while(c--){
        cin>>n;
        if(n%7==0||n%7==1){
            cout<<"Dzs"<<endl;
            // printf("Dzs\n");
        }else{
            cout<<"Sproblvem"<<endl;
            // printf("Sproblvem\n");
        }
	}
    return 0;
}