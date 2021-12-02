#include <iostream>
#include <vector> // 인클루드 필요!

using namespace std;

int main()
{
	std::vector<int> array;
	//std::array와 달리 동적 배열이라 사이즈가 고정되지 않는다.

	std::vector<int> array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;
	array2.resize(10); 
	cout << array2.size() << endl;
	//사이즈 변환이 매우 쉽다.

	vector<int> arr = { 1,2,3,4,5 };

	for (auto& itr : arr)
			cout << itr << " ";
	cout << endl;

	cout << arr[1] << " " << arr.at(1) << endl; //array와 같은 기능



			 
	//
	//vector는 영역 밖으로 나갈 때 자동으로 메모리를 반환한다!!
	//

	return 0;
}