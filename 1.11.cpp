#include<iostream>
using namespace std;

int main()
{
	int a=0, b=0;
	cout<<"Please put in two integers:";
	cin>>a>>b;
	if(a<b)
	{
		while(a<=b)
		{
			cout<<endl<<a;
			a++;
		}
	}
	else
	{
		while(b<=a)
		{
			cout<<endl<<a;
			a--;
		}	
	}
	system("pause");
}