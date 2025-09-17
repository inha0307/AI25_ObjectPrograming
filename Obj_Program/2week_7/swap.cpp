#include <iostream>

void swap(int &a, int &b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int a = 100, b = 200;
	std::cout << "a = " << a << ", b= " << b << std::endl;
	swap(a, b);
	std::cout << "a = " << a << ", b= " << b << std::endl;
	return 0;
}