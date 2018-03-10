#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	if(s1 < s2)
		cout<<s2<<endl;
	else if(s1>s2)
		cout << s1 <<endl;
	else cout<<"equal."<<endl;
	system("pause");
}