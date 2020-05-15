//154. A Simple Task
#include <stdio.h>

int main(int argc, char const *argv[])
{	
	char pass[52];
	int count = 1;
	while(scanf("%s", &pass) != EOF){
		if (pass[0] == '#')
		{
			break;
		}
		for (int i = 1; pass[i] != '\0'; ++i)
		{
			pass[i] = pass[i] - 'a' + 'A';
			i ++;
		}
		printf("Case %d: %s\n", count++, pass);
	}
	return 0;
}