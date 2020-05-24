//55. The Hardest Problem Ever
#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
	string start,end,sentence;

	int len;
	while(getline(cin,start)){
		if (start == "ENDOFINPUT")
		{
			break;
		}
		getline(cin,sentence);
		len = sentence.length();
		for (int i = 0; i < len; ++i)
		{
			if(sentence[i]>='A'&&sentence[i]<='Z'){
				sentence[i]-=5;
				if(sentence[i]<'A'){
					sentence[i] += 26;
				}
			}
		}
		cout << sentence << endl;
		getline(cin,end);
	}
	return 0;
}