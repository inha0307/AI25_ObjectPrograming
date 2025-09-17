//배열을 선언하면 크기를 정해줘야 함 > 정적 할당(스택)
//new 배열은 배열의 크기를 정해주지 않아도 된다 > 동적 할당(힙) > 변수를 넣을 수 있다.

#include <iostream>
#include <string>
#include <random>

using namespace std;

int main()
{
	int numValues = 10;
	int* arr = new int[numValues];
	for (int i = 0; i < numValues; i++)
	{
		arr[i] = rand() % 100 + 1;
	}
	for (int i = 0; i < numValues; i++)
	{
		cout<< i <<  " : " << arr[i]  << endl;
	}

	delete[] arr;
	return 0;
}