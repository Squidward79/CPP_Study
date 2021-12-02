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

	//어느 형이든 void포인터에 담을 수 있다!
	//그러나 포인터에 담긴 자료가 어떤 자료형이었는지는 알 수 없다.

	cout << &c << " " << ptr << endl; //c가 char라서 cout하면 /0이 없어 쓰레기값이 출력

	cout << &f << " " << ptr << endl;
	// cout << *ptr << endl;  dereferencing 하려면 에러남. 자료형을 몰라서

	cout << *static_cast<float*>(ptr) << endl;
	//강제로 자료형을 정해 해당 포인터로 캐스팅을 한 후 디레퍼런싱해야함


}