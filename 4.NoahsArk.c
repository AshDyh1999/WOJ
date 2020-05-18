//4. Noah's Ark
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

double transform(double a,char *c)
{        
    double k;  
    if(strcmp(c,"meters")==0){
    	k=100.0;
    }  
    else if(strcmp(c,"cubits")==0){
    	k=45.72;
    }  
    else if(strcmp(c,"feet")==0){
    	k=30.48;
    }  
    else if(strcmp(c,"inches")==0){
    	k=2.54;
    }else{
    	k=1.;
    }
    a=a*k;  
    return a;        
}

int main(int argc, char const *argv[])
{	double len,wid,height,l,w,h;
	char unit[3][20];
	while(cin>>len>>unit[0]>>wid>>unit[1]>>height>>unit[2]){	
        l=transform(len,unit[0]);  
        w=transform(wid,unit[1]);
        h=transform(height,unit[2]);
        // cout<<l<<w<<h<<endl;		
		if (fabs(l - w) < 0.000001)
		{
			printf("Spin\n");
		}else if (fabs(l - 6*w) < 0.000001)
		{
			printf("Excellent\n");
		}else{
			printf("Neither\n");
		}
		printf("\n");
	}
	return 0;
}