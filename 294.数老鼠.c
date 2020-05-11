//294. 数老鼠
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int calc(int year){
	int old = 0;
	int young = 1;
	int mid = 0;
	for (int i = 1; i <= 2*year; ++i)
	{	
		old += mid;
		mid = young;
		young = old*2;
	}
	return old + young + mid;
}

int main(int argc, char const *argv[])
{	
	int group;
	while(cin>>group){
		int year[group];
		for (int i = 0; i < group; ++i)
		{		
			cin>>year[i];
			cout<<calc(year[i])<<endl;
		}
	}
	return 0;
}