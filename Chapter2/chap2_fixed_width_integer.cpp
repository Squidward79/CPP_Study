#include <iostream>
//#include <cstdint>  iostream에서 이미 cstdint를 include 하고 있다

int main()
{
	using namespace std;

	std::int16_t i(5); // 무조건 2바이트(16bits)짜리 데이터타입 == short 가 됨
	std::int8_t myint = 65; // 무조건 1바이트(8bits)짜리 데이터타입 == char 가 됨

	cout << myint << endl;

	std::int_fast8_t fi(5); // 8비트 타입중에 가장 빠른 데이터 타입
	std::int_least64_t fl(5); // 최소 8바이트를 갖는 데이터 타입 

	return 0;
}