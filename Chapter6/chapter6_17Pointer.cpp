#include <iostream>
using namespace std;


void doSomething(int& n)
{
	cout << &n << endl;
	n = 10;
	cout << "dosomething" << endl;
}

void doSomething2(const int& n)
{
	cout << &n << endl;
	//n = 10; const�� �ٿ��� �Ķ���ͷ� ������ ���ο��� ������ �� ����.
	cout << "dosomething" << endl;
}


int main()
{

	//��������
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	// &ref�� value�� �� �ٸ� �̸��̶�� ���� �ȴ�.
	// &ref�� �ݵ�� ó���� �ʱ�ȭ �Ǿ�� �Ѵ�.
	// &ref�� literal�� �ʱ�ȭ �� �� ����. ������ ���� �Ѵ�.
	int &ref = value;
	cout << ref << endl;

	// ref = 10; ���������� ���� �ٲٸ� ������ ���Ѵ�
	
	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	//�� 3���� �ּҴ� �����ϴ�

	cout << &ptr << endl;
	// �����ͺ������ּҴ� �ٸ��� 


	//���������� �Ķ���ͷ� ���� ����Ǿ� �Ѿ�� �޸𸮵� ���̸鼭 ������ó�� �� �� �ִ�!!
	doSomething(value);


	return 0;
}