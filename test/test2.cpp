//输入年份判断是否为闰年小程序
#include<iostream>
using namespace std;
int main()
{
	int year;
	cout << "please enter the year:" << '\t'; cin >> year;
	if (year%4==0&&year%100!=0)
	{
		cout << "true";

	}
	else
	{
		cout << "false";
	}
	system("pause");

	return 0;

}
