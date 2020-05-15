//100. Forest
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{	int n,i;
	int count[8];
	char s[1000001];
	scanf("%d", &n);
	while((n--)>0){
		i = 0;
		scanf("%s", &s);
		memset(count,0,sizeof(count));
		int len = strlen(s);
		while(i <len){
			switch(s[i]){
				case 'l':
					i+=9;
					count[0]++;
					break;
				case 'd':
					i+=10;
					count[2]++;
					break;
				case 'z':
					i+=3;
					count[3]++;
					break;
				case 'r':
					i+=9;
					count[5]++;
					break;
				case 'k':
					i++;
					if (s[i] == 'i')
					{
						i+=5;
						count[4]++;
					}else{
						i+=9;
						count[1]++;
					}
					break;
				case 'f':
					i++;
					if (s[i] == 'o')
					{
						i+=5;
						count[6]++;
					}else{
						i+=5;
						count[7]++;
					}
					break;
			}
		}
		int max=0,maxi=0;
		for(int i=0;i<8;i++){
			if(count[i]>max){
				max=count[i];
				maxi=i;
			}
		}		
		switch(maxi){
		case 0:printf("littleken");break; 
		case 1:printf("knuthocean");break; 
		case 2:printf("dongfangxu");break; 
		case 3:printf("zap");break; 
		case 4:printf("kittig");break; 
		case 5:printf("robertcui");break; 
		case 6:printf("forest");break; 
		case 7:printf("flirly");break; 
		}
		printf("\n");
	}	
	return 0;	
}