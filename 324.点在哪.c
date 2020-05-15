//324. 点在哪?
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{	
	char rc;
	float r[1000],c[1000],point[2];
	int rcount = 0, ccount = 0, count = 0;
	while(scanf("%c", &rc)){
		if (rc == 'r')
		{	count++;
			for (int i = 0; i < 4; ++i)
			{
				scanf("%f", &r[i+rcount*5]);
			}
			r[4+rcount*5] = count;
			rcount ++;
		}else if (rc == 'c')
		{	
			count++;
			for (int i = 0; i < 3; ++i)
			{
				scanf("%f", &c[i+ccount*4]);
			}
			c[3+ccount*4] = count;
			ccount ++;
		}else if (rc == '*')
		{
			break;
		}
	}
	// printf("r %d , c %d,count %d\n",rcount, ccount, count);
	// for (int i = 0; i < 10; ++i)
	// {
	// 	printf("%f\t", r[i]);
	// }
	// printf("\n");
	// for (int i = 0; i < 4; ++i)
	// {
	// 	printf("%f\t", c[i]);
	// }
	// printf("\n");

	int flag,point_count = 0;
	while(scanf("%f %f",&point[0], &point[1])){
		// printf("%f %f\n",point[0], point[1]);
		point_count++;
		if (point[0] == point[1] &&  fabs(point[0] - 9999.9) < 0.0001)
		{
			break;
		}
		flag = 0;
		for (int i = 0; i < rcount; ++i)
		{
			if (!(((point[0] - r[0+i*5]) * (point[0] - r[2+i*5])) > 0 || ((point[1] - r[1+i*5]) * (point[0] - r[3+i*5]) > 0)))
			{
				printf("Point %d is contained in figure %d\n", point_count, (int)r[4+i*5]);
				flag = 1;
			}
		}
		for (int i = 0; i < ccount; ++i)
		{
			if (((point[0] - c[0+i*4])*(point[0] - c[0+i*4]) + (point[1] - c[1+i*4])*(point[1] - c[1+i*4])) <= (c[2+i*4] *c[2+i*4]))
			{
				printf("Point %d is contained in figure %d\n", point_count, (int)c[3+i*4]);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			printf("Point %d is not contained in any figure\n", point_count);
		}
	}
	return 0;
}