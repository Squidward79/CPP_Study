#include <iostream>
//#include <cstdint>  iostream���� �̹� cstdint�� include �ϰ� �ִ�

int main()
{
	using namespace std;

	std::int16_t i(5); // ������ 2����Ʈ(16bits)¥�� ������Ÿ�� == short �� ��
	std::int8_t myint = 65; // ������ 1����Ʈ(8bits)¥�� ������Ÿ�� == char �� ��

	cout << myint << endl;

	std::int_fast8_t fi(5); // 8��Ʈ Ÿ���߿� ���� ���� ������ Ÿ��
	std::int_least64_t fl(5); // �ּ� 8����Ʈ�� ���� ������ Ÿ�� 

	return 0;
}