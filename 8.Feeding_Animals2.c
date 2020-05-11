//8. Feeding Animals(II)
#include <stdio.h>
#include <string.h>
#include <iostream> 
using namespace std;
int main(int argc, char const *argv[])
{
	int num_person, num_animal;
	int i,j,k;
	while(cin>>num_person>>num_animal){
		int relationship[num_person][num_animal];
		int feed_num[num_person],animalpreperson[num_person];
		float capbility[num_person][num_animal];
		//读取用户输入
		for (i = 0; i < num_person; ++i)
		{
			for (j = 0; j < num_animal; ++j)
			{
				cin>>relationship[i][j];
			}
		}
		cin >> k;
		for (i = 0; i < num_person; ++i)
		{
			feed_num[i] = k;
			animalpreperson[i] = 0;
		}

		for (i = 0; i < num_person; ++i)
		{
			for (j = 0; j < num_animal; ++j)
			{
				animalpreperson[i] += relationship[i][j]; 
			}
		}

		for (i = 0; i < num_person; ++i)
		{
			for (j = 0; j < num_animal; ++j)
			{
				capbility[i][j] = 1.0*relationship[i][j]/animalpreperson[i];
			}
		}

		//对于每个动物校验是否有人feed
		int flag = 1, flag2 = 0, maxid;
		double max;
		for (i = 0; i < num_animal && flag == 1; ++i)
		{
			max = 0.;
			flag2 = 0;
			for (j = 0; j < num_person; ++j)
			{
				if (capbility[j][i] > max && feed_num[j] > 0)
				{
					max = capbility[j][i];
					maxid = j;
					flag2 = 1;
				}
			}
			if(flag2 == 0){
				flag = 0;
			}else{
				feed_num[maxid] --;
			}
		}
		if(flag == 1){
			cout<<"Yes"<<endl;
		}else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}