#include <iostream>

using namespace std;

int main(void)
{
	float f_temp, c_temp;
	cout << "ȭ���µ��� �Է��Ͻÿ�: ";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ� " << f_temp << "���� �����µ� " << c_temp << "���Դϴ�.";

	return 0;
}