// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int main()
{
	system("title ASCII编码查询");
	char a = 'a';
	cout << "请输入你所要查询ASCII码的字符：" << endl;
	cin >> a;
	cout << endl << endl;
	cout << a << "的ASCII编码为："<<(int)a << endl;
	cout << endl << endl << endl << endl;
	system("pause");
}

