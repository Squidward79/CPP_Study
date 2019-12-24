#include <iostream>
#include "add.h" 

using namespace std; //iostream 내부의 네임스페이스

namespace my_funciton
{
	int myfunction()
	{
		return 0;
	}
}

#define MAX(a,b) ((a>b) ? a:b) //매크로 부분
#define LIKE_APPLE

int main()
{
	using namespace my_funciton;
	myfunction(); //my_function::myfunction() 

	//LIKE_APPLE가 정의되어 있는지 판단하여 다른 처리
#ifdef LIKE_APPLE
	cout << "apple" << endl;
#else
	cout << "orange" << endl;
#endif // LIKE_APPLE



	cout << add(1, 2) << endl;
	return 0;
}