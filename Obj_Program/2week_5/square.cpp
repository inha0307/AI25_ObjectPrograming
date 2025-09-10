#include <iostream>
using namespace std;
int square(int n)
{
	return n * n;
}

int main()
{
	int num;
	cout << "정수 n을 입력하시오: ";
	cin >> num;
	cout << square(num) << endl;
	return 0;
}