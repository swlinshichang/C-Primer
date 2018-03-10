#include<iostream>
#include<string>
using namespace std;

int main()
{
	string word;
	while (cin >> word)
	{
		cout << word << endl;

	}
	//与1.16中的while(cin>>value)不同，此处的cin>>word会将回车看做结束符
	//cout << word << endl;
	//system("pause");
}