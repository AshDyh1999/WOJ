//286. Area Ratio
#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	
	double a[3], b[3], c[3];
	double x,y,z,n,s,p,w;
	while(cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2]>>c[0]>>c[1]>>c[2]){
		x=sqrt((double)(pow((double)(a[0]-b[0]),2)+pow((double)(a[1]-b[1]),2)+pow((double)(a[2]-b[2]),2)));
        y=sqrt((double)(pow((double)(a[0]-c[0]),2)+pow((double)(a[1]-c[1]),2)+pow((double)(a[2]-c[2]),2)));
        z=sqrt((double)(pow((double)(c[0]-b[0]),2)+pow((double)(c[1]-b[1]),2)+pow((double)(c[2]-b[2]),2)));
        p=(x+y+z)/2;
        s=sqrt(p*(p-x)*(p-y)*(p-z));
        w=pow(x*y*z/(4*s),2);
        n=pow(2*s/(x+y+z),2);
        printf("%.3f\n",n/w);
	}
	
	return 0;
}