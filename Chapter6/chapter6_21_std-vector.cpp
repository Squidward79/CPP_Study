#include <iostream>
#include <vector> // ��Ŭ��� �ʿ�!

using namespace std;

int main()
{
	std::vector<int> array;
	//std::array�� �޸� ���� �迭�̶� ����� �������� �ʴ´�.

	std::vector<int> array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;
	array2.resize(10); 
	cout << array2.size() << endl;
	//������ ��ȯ�� �ſ� ����.

	vector<int> arr = { 1,2,3,4,5 };

	for (auto& itr : arr)
			cout << itr << " ";
	cout << endl;

	cout << arr[1] << " " << arr.at(1) << endl; //array�� ���� ���



			 
	//
	//vector�� ���� ������ ���� �� �ڵ����� �޸𸮸� ��ȯ�Ѵ�!!
	//

	return 0;
}