#include <iostream>
#include "add.h" 

using namespace std; //iostream ������ ���ӽ����̽�

namespace my_funciton
{
	int myfunction()
	{
		return 0;
	}
}

#define MAX(a,b) ((a>b) ? a:b) //��ũ�� �κ�
#define LIKE_APPLE

int main()
{
	using namespace my_funciton;
	myfunction(); //my_function::myfunction() 

	//LIKE_APPLE�� ���ǵǾ� �ִ��� �Ǵ��Ͽ� �ٸ� ó��
#ifdef LIKE_APPLE
	cout << "apple" << endl;
#else
	cout << "orange" << endl;
#endif // LIKE_APPLE



	cout << add(1, 2) << endl;
	return 0;
}