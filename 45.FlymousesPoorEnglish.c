//45. Flymouse's Poor English

#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int t,len;
	cin >> t;
	string sentence;
	// fflush(stdin);
	getchar();
	while(t--){
		getline(cin,sentence);
		len = sentence.length();
		// cout << sentence << endl;
		if (sentence[0] >= 'a' && sentence[0] <= 'z'){
			sentence[0] = sentence[0] - 'a' + 'A';
		}
		for (int i = 1; i < len; ++i)
		{
			if (sentence[i] == ' ')
			{	
				i ++;
			}else if(sentence[i] >= 'A' && sentence[i] <= 'Z'){
				sentence[i] = sentence[i] - 'A' + 'a';
			}
		}
		cout << sentence << endl;
	}
	return 0;
}