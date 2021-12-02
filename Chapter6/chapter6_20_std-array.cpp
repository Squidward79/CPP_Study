#include<iostream>
#include<array> //array를 인클루드 해야함!
#include<algorithm>
using namespace std;

int main()
{
	//int arr[5] = { 1,2,3,4,5 };

	//array는 정적 배열을 대체하기에 좋은 기능

	std::array<int, 5> my_arr = { 17,2,3,48,15 };
	// 단, array를 처음 선언시 크기를 선언해야한다.

	//my_arr = { 0,1,2,3,4 };
	//my_arr = { 0,1,2, }; //부족하게 쓰면 나머진 0으로 채운다

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl; 
	cout << my_arr.size() << endl;
	//at은 [0] 과 같은 기능이다. 그러나, 옳지않은 접근일 경우 예외처리를 해준다.

	cout << endl << endl;

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.begin(), my_arr.end());
	//std::sort(my_arr.rbegin(), my_arr.rend()); 역순정렬

	for (auto& element : my_arr)
		cout << element << " ";

	return 0;


}