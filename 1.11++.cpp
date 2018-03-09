#include<iostream>
using namespace std;

int main()
{
	int a=0, b=0;
	cout<<"Please put in two integers:";
	cin>>a>>b;
	if(a<b)
	{
		for(; a<=b;a++)
		{
			cout<<endl<<a;
		}
	}
	else
	{
		for(; a>=b; a--)
		{
			cout<<endl<<a;
		}	
	}
	system("pause");
}