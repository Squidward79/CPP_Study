#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	short s = 1; // 2bytes = 2 * 8bits = 16 bits
	s = std::numeric_limits<unsigned short>::min(); // short형의 가장 작은 값을 구하는 것
	cout << s << endl;
	s += 1;
	cout << "unsigned short min + 1: " << s << endl<<endl;

	int i = 1; // 4bytes = 4 * 8bits = 32 bits
	i = std::numeric_limits<int>::min(); 
	cout << i << endl;
	i += 1;
	cout << "int min + 1?: " << i << endl<<endl;

	unsigned int ui = -1; // 4bytes = 4 * 8bits = 32 bits
	cout << "unsigned int a = -1 ?: " << ui << endl << endl;

	char c = 1; // 4bytes = 4 * 8bits = 32 bits
	c = std::numeric_limits<char>::min();
	cout << (int)c << endl;
	c += 1;
	cout << "char min + 1?: " << (int)c << endl;

	return 0;
}