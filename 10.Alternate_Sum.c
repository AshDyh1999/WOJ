//10. Alternate Sum
//公式题，ans=（max*2^(n-1)）%2006;
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{	int num,max,answer;
	while(cin>>num){
		if(num == 0){
			break;
		}
		int set[num] = {0};
		for (int i = 0; i < num; ++i)
		{
			cin>>set[i];
		}
		max = set[0];
		for(int i=1;i<num;i++){
			if (max < set[i])
			{
				max = set[i];
			}
		}
	   	answer = max;
	   	for (int i = 1; i < num; ++i)
	   	{
	   		answer*=2;
	   		if (answer < 0)
	   		{
	   			answer+=2006;
	   		}
	   		answer %= 2006;
	 	}

	   	if(answer<0){
	    	answer+=2006;
	   	}
	   	cout<<answer%2006<<endl;
	}
	return 0;
}