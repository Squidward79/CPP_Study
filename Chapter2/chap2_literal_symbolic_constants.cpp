#include <iostream>
#include "MY_CONSTANTS.h"

int main()
{
	using namespace std;

	/*
	int num_items = 123;
	int price = num_items * 10; //10 is ~

	// 10 같은 매직넘버를 코드에 남겨두는 것은 좋지 않다.
	// 불필요한 주석을 추가해야 하기도 하고.
	*/

	const int price_per_item = 10; // 상수화 하여 의미를 명시해주는 게 좋다.
	int num_items = 123;
	int price = num_items * price_per_item;
	

	//---------------------------------------------------------------------



	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi; // 헤더에 상수를 빼놓고 재사용

	const int my_const(radius); //런타임에서 결정되는 상수
	constexpr int my_constexpr(1212); //컴파일타임에서 결정되는 상수
}