//413. Pinhole Imaging
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	long t,a,b,h;
	cin>>t;
	while(t--){
		cin>>a>>b>>h;
		printf("%.2lf\n", (double) b*h/a);
	}
	return 0;
}