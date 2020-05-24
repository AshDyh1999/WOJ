//99. flirly
#include<stdio.h>
#include <iostream>
using namespace std;
int m;
int power(int a,int n){
	if(n==0){
		return 1;
	}
	if(n==1){
		return a%m;
	}
	if(n%2==0){
		return (power((a%m)*(a%m),n/2)%m);
	}
	if(n%2==1){
		return ((a%m)*(power((a%m),n-1))%m);
	}
}
int main(){
	int n,res;
	while(cin >> n >> m){
		/*res=1;
		for(int i=2;i<=n;i++){
			res=(2*res+1)%m;
		}
		printf("%d\n",res);*/
		if(n==0){
			res=0;
		}else{
			res=power(2,n);
			if(res==0){
				res=m-1;
			}else{
				res=res-1;
			}
		}
		cout << res << endl;
	}
	return 0;
}