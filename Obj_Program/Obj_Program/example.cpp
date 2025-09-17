// 두 번째 예제 프로그램
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int a = 10;
	cout << "a : " << a << endl;
	int* b = &a;
	cout << "&a : " << &a << endl;
	cout << "*b : " << *b << endl;
	*b = 7;
	cout << "a : " << a << endl;
	return 0;
}