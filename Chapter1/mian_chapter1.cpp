#include <iostream>
#include "add.h" //���� ����� "" �̴�

using namespace std; 

namespace my_funciton
{
	int myfunction()
	{
		return 0;
	}
}

int main()
{
	using namespace my_funciton;

	myfunction();

	cout << add(1, 2) << endl;

	return 0;
}