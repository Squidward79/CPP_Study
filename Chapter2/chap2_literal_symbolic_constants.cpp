#include <iostream>
#include "MY_CONSTANTS.h"

int main()
{
	using namespace std;

	/*
	int num_items = 123;
	int price = num_items * 10; //10 is ~

	// 10 ���� �����ѹ��� �ڵ忡 ���ܵδ� ���� ���� �ʴ�.
	// ���ʿ��� �ּ��� �߰��ؾ� �ϱ⵵ �ϰ�.
	*/

	const int price_per_item = 10; // ���ȭ �Ͽ� �ǹ̸� ������ִ� �� ����.
	int num_items = 123;
	int price = num_items * price_per_item;
	

	//---------------------------------------------------------------------



	double radius;
	cin >> radius;
	double circumference = 2.0 * radius * constants::pi; // ����� ����� ������ ����

	const int my_const(radius); //��Ÿ�ӿ��� �����Ǵ� ���
	constexpr int my_constexpr(1212); //������Ÿ�ӿ��� �����Ǵ� ���
}