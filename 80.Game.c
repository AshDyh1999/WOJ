//80. Game
#include<stdio.h>
#include <iostream>
using namespace std;

int main(){
	int t,n,i;
	cin >> t;
	while(t--){
		cin >> n;
		i=n%14;
		if(i==0)
		printf("snoopy wins the game!\n");
		else
		printf("flymouse wins the game!\n");			
	}
	return 0;
} 