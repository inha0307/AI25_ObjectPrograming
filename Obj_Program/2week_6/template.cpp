#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b = 0, T c = 0, T d = 0)
{
	return a + b + c + d;
}

int main()
{
	cout << "sum(10) = " << sum(10) << endl;
	cout << "sum(10.0, 15.0) = " << sum(10.0, 15.0) << endl;
	cout << "sum(10.1, 15.1, 25.1) = " << sum(10.1, 15.1, 25.1) << endl;
	cout << "sum(10, 15, 25, 30) = " << sum(10, 15, 25, 30) << endl;
	return 0;
}

