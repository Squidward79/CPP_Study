#include<iostream>

using namespace std;

int main()
{
	// void pointer == generic pointer

	int i = 5;
	float f = 3.0;
	char c = 'a';

	void* ptr = nullptr;
	ptr = &i;
	ptr = &f;
	//ptr = &c;

	//��� ���̵� void�����Ϳ� ���� �� �ִ�!
	//�׷��� �����Ϳ� ��� �ڷᰡ � �ڷ����̾������� �� �� ����.

	cout << &c << " " << ptr << endl; //c�� char�� cout�ϸ� /0�� ���� �����Ⱚ�� ���

	cout << &f << " " << ptr << endl;
	// cout << *ptr << endl;  dereferencing �Ϸ��� ������. �ڷ����� ����

	cout << *static_cast<float*>(ptr) << endl;
	//������ �ڷ����� ���� �ش� �����ͷ� ĳ������ �� �� ���۷����ؾ���


}