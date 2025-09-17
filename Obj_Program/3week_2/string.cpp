#include <string>
#include <iostream>
using namespace std;

int main()
{
	string s = "000000-112233";
	cout << s.find('-') << endl;
	s.erase(s.find('-'),1);
	cout << s << endl;
	return 0;
}