#include <iostream>
#include <string>

using namespace std;

int main()
{
	string DNA1 = "GATTGCCCCCTAG";
	string DNA2 = "CACTGACACCTAG";
	int cnt = 0;
	int DNA1_len = DNA1.length();
	int DNA2_len = DNA2.length();
	for (int i = 0; i < DNA1_len; i++)
	{
		if (DNA1[i] != DNA2[i])
		{
			cnt++;
		}
	}
	cout << cnt << endl;
	return 0;
}