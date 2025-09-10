#include <iostream>
using namespace std;

double average(double a, double b)
{
	double sum = a + b;
	return sum / 2;
}

int main(void)
{
	double mid = average(10.6, 7.2);
	cout << mid << endl;
	return 0;
}