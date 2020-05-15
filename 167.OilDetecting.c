//167. Oil Detecting
#include<stdio.h>

char arr[100][100];
int length, width;
void sarch(int i, int j){
	if (i<length && i>= 0 && j<width && j>=0)
	{
		if (arr[i][j] == 'O')
		{
			arr[i][j] = 'X';
	        sarch(i+1,j);
	        sarch(i+1,j+1);
	        sarch(i+1,j-1);
	        sarch(i,j+1);
	        sarch(i,j-1);
	        sarch(i-1,j);
	        sarch(i-1,j-1);
	        sarch(i-1,j+1);			
		}else{
			return;
		}
	}else{
		return;
	}
}
int main(int argc, char const *argv[])
{
	int count;
	while(scanf("%d%d", &length, &width)){
		// printf("%d\t%d\n", length,width);
		if (length == 0 && width == 0)
		{
			break;
		}
		count = 0;
		for (int i = 0; i < length; ++i)
		{
			scanf("%s", &arr[i]);				
		}
		// for (int i = 0; i < length; ++i)
		// {
		// 	for (int j = 0; j < width; ++j)
		// 	{
		// 		printf("%c", arr[i][j]);
		// 	}
		// 	printf("\n");
		// }
		for (int i = 0; i < length; ++i)
		{
			for (int j = 0; j < width; ++j)
			{
				if (arr[i][j] == 'O')
				{
					count++;
					sarch(i,j);
				}
			}
		}
		printf("%d\n", count);
	}

	return 0;
}