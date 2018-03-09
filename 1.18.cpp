#include<iostream>
using namespace std;

int main()
{
	int cnt = 0, cntnum = 0, num = 0; 
	if(cin>>cntnum)
	{
		cnt = 1;
		while(cin>>num)
		{
			if(cntnum == num)
			{
				cnt++;
			}
			else 
			{
				cout<<cntnum<<" occur "<<cnt<<" times."<<endl;
				cntnum = num;
				cnt = 1;
			}
		}
		cout<<cntnum<<" occur "<<cnt<<" times."<<endl;
		system("pause");
	}
}