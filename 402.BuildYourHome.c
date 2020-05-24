//402. Build Your Homes
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	
	int n;
	while(cin >> n){
		if (n == 0)
		{
			break;
		}
		double point[n][2];
		double area = 0.;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				cin >> point[i][j];	
			}
		}
		if (n == 1 || n == 2)
		{
			cout << 0 << endl;
			continue;
		}
		for (int i = 0; i < n-1; ++i)
		{
			area += (point[i][0]*point[i+1][1] - point[i+1][0]*point[i][1]);
		}
		area += (point[n-1][0]*point[0][1] - point[0][0]*point[n-1][1]);
		// area = (int)(fabs(area)/2.0 + 0.5);
		// cout << area << endl;
		area=fabs(area)/2.0;
		printf("%d\n",(int)(area+0.5));
	}
	
	return 0;
}