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
	//n = 10; const를 붙여서 파라미터로 받으면 내부에서 수정할 수 없다.
	cout << "dosomething" << endl;
}


int main()
{

	//참조변수
	int value = 5;

	int* ptr = nullptr;
	ptr = &value;

	// &ref는 value의 또 다른 이름이라고 보면 된다.
	// &ref는 반드시 처음에 초기화 되어야 한다.
	// &ref는 literal로 초기화 할 수 없다. 변수가 들어가야 한다.
	int &ref = value;
	cout << ref << endl;

	// ref = 10; 참조변수의 값을 바꾸면 원본도 변한다
	
	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	//이 3개의 주소는 동일하다

	cout << &ptr << endl;
	// 포인터변수의주소는 다르다 


	//참조변수를 파라미터로 쓰면 복사되어 넘어가는 메모리도 줄이면서 포인터처럼 쓸 수 있다!!
	doSomething(value);


	return 0;
}