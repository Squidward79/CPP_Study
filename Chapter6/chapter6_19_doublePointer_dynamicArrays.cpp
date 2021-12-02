#include<iostream>

using namespace std;

int main()
{
	int* ptr = nullptr;
	int** ptrptr = nullptr;

	int value = 5;
	ptr = &value;
	ptrptr = &ptr;

	cout << ptr <<" " << *ptr << " " << &ptr << endl;
	cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	cout << **ptrptr << endl;

	//////////////////////////////////////////
	cout << endl << endl;

	// 2차원 배열에 써먹는 이중포인터
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};


	/* 
	* 
	* 첫번째 방법!
	* 
	int* r1 = new int[col] {1, 2, 3, 4, 5};
	int* r2 = new int[col] {6, 7, 8, 9, 10};
	int* r3 = new int[col] {11, 12, 13, 14, 15};
	//이렇게 써야 하는것을 편하게 줄이기 위해

	int** matrix = new int* [row] {r1, r2, r3};

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}

	delete[]r1;
	delete[]r2;
	delete[]r3;
	delete[]matrix;
	*/

	int** matrix = new int* [row];

	for (int r = 0; r < row; r++)
	{
		matrix[r] = new int[col];
	}

	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c< col; c++)
		{
			matrix[r][c] = s2da[r][c];
		}
	}


	//행렬 출력 
	for (int r = 0; r < row; r++)
	{
		for (int c = 0; c < col; c++)
		{
			cout << matrix[r][c] << " ";
		}
		cout << endl;
	}


	//delete 시킬때는 내부부터 순차적으로 삭제해야한다!
	for (int r = 0; r < row; r++)
	{
		delete[] matrix[r];
	}

	delete[] matrix;

	return 0;
}