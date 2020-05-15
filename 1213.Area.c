//WOJ1213-Area
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int n;
	float area;
	while(scanf("%d", &n) != EOF){
		float point[n][2];
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				scanf("%f", &point[i][j]);
			}
		}
		area = 0;
		for (int i = 0; i < n-1; ++i)
		{
			area  = area + (point[i][0]*point[i+1][1] - point[i][1]*point[i+1][0]);
		}
		area  = area + (point[n-1][0]*point[0][1] - point[n-1][1]*point[0][0]);
		area = fabs(area)/2;
		printf("%d\n", (int)area);
	
	}	
	return 0;
}