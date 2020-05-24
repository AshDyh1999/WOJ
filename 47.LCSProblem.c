//47. LCS Problem
#include<stdio.h>
#include<cstring>
#include <iostream>
using namespace std;

int main(){
	int t,i,j,k,ans;
	// char s1[2016],s2[2016];
	string s1,s2;
	int len1,len2;
	// scanf("%d",&t);
	cin >> t;
	while(t--){
		ans=0;
		cin>>s1;
		cin>>s2;
		// len1=strlen(s1);
		// len2=strlen(s2);
		len1 = s1.length();
		len2 = s2.length();
		for(i=0;i<len1;i++){
			if(len1-i<=ans)
			break;
			for(j=0;j<len2;j++){
				if(s1[i]==s2[j]){
					k=1;
					while(s1[i+k]!='\0'&&s2[j+k]!='\0'&&s1[i+k]==s2[j+k])
					k++;
					if(ans<k)
					ans=k;
				}
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}