#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s, result, flag = "Y";
	while (cin >> s)
	{
		result += s;
		cout << "another string ? Y or N" << endl;
		//cin >> s;
		cin >> flag;
		if (flag == "Y")
			continue;
		else if (flag == "N")
		{
			cout << result << endl;
			system("pause");
		}
		else
			cout << "error!" << endl;
	}
	return 0;
}