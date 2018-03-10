#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	auto len1 = s1.size();
	auto len2 = s2.size();
	if(len1 < len2)
		cout<< s2 << len2 <<endl;
	else if(len1>len2)
		cout << s1 << len1 <<endl;
	else cout<<"equal"<< len1 <<endl;
	system("pause");
}