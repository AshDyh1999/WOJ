//7. Feeding Animals(I)
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{	
	int num_animal,rop=0;
	int answer[100], tmp[10000];

	while((scanf("%d", &num_animal)) != EOF){
		// int time[num_animal*8] = {0};
		int* time = (int*)malloc(sizeof(int) * num_animal * 8);
		
		for (int j = 0; j < 8; ++j)
		{
			for (int i = 0; i < num_animal; ++i)
			{
				scanf("%d", (time+j*num_animal + i));
			}
		}
		//打印验证输入是否正确
		// printf("打印验证输入是否正确\n");
		// for (int i = 0; i < 8; ++i)
		// {
		// 	for (int j = 0; j < num_animal; ++j)
		// 	{
		// 		printf("%d\t", *(time+i*num_animal + j));
		// 	}
		// 	printf("\n");
		// }
		// printf("%d\n", num_animal);
		// int tmp[num_animal] = {0};
		int min = 0;
		for (int i = 0; i < num_animal; ++i)
		{
			tmp[i] = *(time + i);
			// printf("%d\n", *(time+i));
		}
		for (int i = 0; i < num_animal; ++i)
		{
			// printf("tmp = %d\t", tmp[i]);
			for (int j = 0; j < 8; ++j)
			{
				tmp[i] = (tmp[i] < *(time + j*num_animal + i))? tmp[i] : *(time + j*num_animal + i);
			}
			// printf("min = %d\n", tmp[i]);
			min += tmp[i];
		}
		answer[rop] = min;
		rop++;
		// printf("%d\n", min);
	}
	for(int i=0; i<rop; i++)
		printf("%d\n",answer[i]);
	return 0;
}