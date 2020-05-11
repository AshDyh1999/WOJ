#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int count = 0;

int calc(int length){
	// cout<<length<<endl;
	count++;
	if(length == 1){
		// cout << count << endl;
		return count;
	}
	if(length%2 == 1){
		length = 3*length+1;
	}else{
		length /= 2;
	}
	calc(length);
}
int main(int argc, char const *argv[])
{	
	int max,min;
	while(cin>>min>>max){
		if (!max && !min)
		{
			break;
		}
		int chain_length[max-min+1] = {0};
		int j = 0, maxchain = 0;
		for (int i = min; i <= max; i++)
		{	count = 0;
			chain_length[j] = calc(i);
			// printf("i = %d %d\n", i, chain_length[j]);
			if(chain_length[j] > maxchain){
				maxchain = chain_length[j];
			}
			j++;
		}
		cout<<maxchain<<endl;
	}
	// calc(22);
	return 0;
}