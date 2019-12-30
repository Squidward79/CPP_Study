#include <iostream>
#include <cmath>
#include <iomanip> //출력숫자 조작


int main()
{
	using namespace std;

	cout << endl << "부동소수점 표현의 오차 체크" << endl;

	float f(123456789.0f); //유효숫자 10개
	cout << setprecision(9); //9개까지만 출력
	cout << f << endl;


	cout << endl << "연산의 오차 체크" << endl;
	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);
	cout << d1 << endl;
	cout << d2 << endl;

	cout<< endl << "0 나눗셈 관련" << endl;
	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;
	
	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) <<endl;
	cout << 1.0 << " " << std::isnan(1.0) << endl;


	return 0;
}