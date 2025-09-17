#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str = "학생들의 성적을 입력하시오: ";
	int num = 5;
	int cin_num;
	int sum = 0;
	int* arr = new int[num];
	for (int i = 0; i < num; i++)
	{
		cout << str;
		cin >> cin_num;
		sum += cin_num;
	}
	cout << "성적 평균" << sum / num << endl;
	delete[] arr;
	return 0;
}