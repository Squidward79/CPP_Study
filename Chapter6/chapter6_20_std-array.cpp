#include<iostream>
#include<array> //array�� ��Ŭ��� �ؾ���!
#include<algorithm>
using namespace std;

int main()
{
	//int arr[5] = { 1,2,3,4,5 };

	//array�� ���� �迭�� ��ü�ϱ⿡ ���� ���

	std::array<int, 5> my_arr = { 17,2,3,48,15 };
	// ��, array�� ó�� ����� ũ�⸦ �����ؾ��Ѵ�.

	//my_arr = { 0,1,2,3,4 };
	//my_arr = { 0,1,2, }; //�����ϰ� ���� ������ 0���� ä���

	cout << my_arr[0] << endl;
	cout << my_arr.at(0) << endl; 
	cout << my_arr.size() << endl;
	//at�� [0] �� ���� ����̴�. �׷���, �������� ������ ��� ����ó���� ���ش�.

	cout << endl << endl;

	for (auto& element : my_arr)
		cout << element << " ";
	cout << endl;

	std::sort(my_arr.begin(), my_arr.end());
	//std::sort(my_arr.rbegin(), my_arr.rend()); ��������

	for (auto& element : my_arr)
		cout << element << " ";

	return 0;


}