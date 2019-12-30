#include <iostream>
#include <cmath>
#include <iomanip> //��¼��� ����


int main()
{
	using namespace std;

	cout << endl << "�ε��Ҽ��� ǥ���� ���� üũ" << endl;

	float f(123456789.0f); //��ȿ���� 10��
	cout << setprecision(9); //9�������� ���
	cout << f << endl;


	cout << endl << "������ ���� üũ" << endl;
	double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);

	cout << setprecision(17);
	cout << d1 << endl;
	cout << d2 << endl;

	cout<< endl << "0 ������ ����" << endl;
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