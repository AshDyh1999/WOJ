//192. Image Conversion
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	int n,pixel,res,count = 0;
	int bit[8] = {0};
	while(scanf("%d", &n) != EOF){
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				scanf("%d", &pixel);
				count = 0;
				memset(bit, 0, sizeof(bit));
				while(pixel != 0){
					bit[count] = pixel%2;
					count++;
					pixel /= 2;
				}
				res = bit[0]^bit[1]^bit[2]^bit[3]^bit[4]^bit[5]^bit[6]^bit[7];
				if (j != 0)
				{
					printf(" ");
				}
				printf("%d", res);
			}
			printf("\n");
		}
	}
	return 0;
}