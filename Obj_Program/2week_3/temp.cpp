#include <iostream>

using namespace std;

int main(void)
{
	float f_temp, c_temp;
	cout << "화씨온도를 입력하시오: ";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "화씨온도 " << f_temp << "도는 섭씨온도 " << c_temp << "도입니다.";

	return 0;
}