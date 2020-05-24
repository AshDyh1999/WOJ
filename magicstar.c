#include<stdio.h>
#include<string.h>
#include <iostream>
using namespace std;

string name[6001];
char n1[1001],n2[1002];

int main(){
	int ans,i,j,k,n,m,q;
	cin >> n;
	while(n--){
		// scanf("%d",&i);
		cin >> i;
		// scanf("%s",&name[i]);
		cin >> name[i];
	}
	cin >> m;
	while(m--){
		cin >> q;
		ans=0;
		while(q--){		
			cin >> i >> j;
			for(k=0;k < 1001;k++){
				if (name[i][k]=='\0' || name[j][k]=='\0')
				{
					break;
				}
				if(name[i][k]!=name[j][k])
				break;
			}
			ans+=k;
		}
		cout << ans << endl;
	}
	return 0;
} 