#include <iostream>
using namespace std;
int square(int n)
{
	return n * n;
}

int main()
{
	int num;
	cout << "���� n�� �Է��Ͻÿ�: ";
	cin >> num;
	cout << square(num) << endl;
	return 0;
}