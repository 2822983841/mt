/*
 * Helloworld cpp
 * Author: luo
 * Date: 2015-2-27
 * Version: 1.0
 */
#include<iostream>
using	namespace std;

int main(int argc, char* argv[])
{
	int number1=0,number2=0;
	char db=0;
	//cout <<"Hello World!\n" << std::endl;
	//cout << "hello cpp\n";
	while(1)
	{
	cout << "请输入两个数字:" << endl;
	cin >> number1;
	cin >> number2;
	cout << "请输入运算方式(+-*/)" << endl;
	cin >> db;
	if(db=='+'){
	cout << number1 << "+" << number2 << "=" << number1+number2 <<endl;
		}
	else if(db=='-'){
	cout << number1 << "-" << number2 << "=" << number1-number2 <<endl;
		}
	else if(db=='*'){
	cout << number1 << "*" << number2 << "=" << number1*number2 <<endl;
		}
	else if(db=='/'){
	cout << number1 << "/" << number2 << "=" << number1/number2 <<endl;
		}
	cout << db << endl;
	}
	
	return 0;
}
