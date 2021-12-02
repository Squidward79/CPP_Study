#include<iostream>
#include<string>
#include<vector>

#include<sstream> //string stream

/// <summary>
/// �Ķ���ͷ� ���°� �����̵簣�� string���� ���� �������ִ� ���ø� �Լ�
/// </summary>
/// <returns></returns>
template <typename T>
std::string ToString(T x)
{
	std::ostringstream osstream;
	osstream << x;
	return osstream.str();
}

template <typename T>
bool FromString(const std::string& str, T& x)
{
	std::istringstream isstream(str); //��ǲ��Ʈ����Ʈ���� str�־ �ʱ�ȭ
	return (isstream >> x) ? true : false;

}

int main()
{
	///////////////////////////////////////////
	//��Ʈ���� ������
	///////////////////////////////////////////


	std::string my_string("my String");
	std::cout << my_string << std::endl;

	std::string my_string2(my_string,3);
	std::cout << my_string2 << std::endl;
	// �տ��� 3�� ���ڸ� �����.

	std::string my_string3(my_string, 3,5);
	std::cout << my_string3 << std::endl;
	// �տ��� 3�� ���ڸ� ����� �� ���� 5�� ���ڸ� �����´�.

	std::string my_string4(10, 'A');
	std::cout << my_string4 << std::endl;
	// �տ��� 10���� A�� �ִ´�


	std::vector<char> vec;
	for (auto e : "Today is a good day.")
		vec.push_back(e);

	std::string my_string5(vec.begin(), vec.end());
	std::cout << my_string5 << std::endl;
	//���Ϳ� ���ڿ��� �ְ� ��Ʈ������ ���
	//stl�� ���ͷ����Ϳ� �Բ� ����� �� �ִ�.


	std::string my_string6(vec.begin(), std::find(vec.begin(),vec.end(),'y'));
	std::cout << my_string6 << std::endl;
	//���Ϳ� ���� ���ڿ� �߿��� ���ۺ��� y�� �ٷ� �ձ��� ���


	std:: cout<< std::endl << std::endl;

	///////////////////////////////////////////
	//��Ʈ���� ����ȯ
	///////////////////////////////////////////
	
	//std::string st(4)  �̷��� ���� ��������
	std::string st(std::to_string(4)); //��Ʈ������ ĳ�����ؾ���.

	std::string st2(ToString(4)); //�ƴϸ� ���ø� ����� ������~

	double d;
	//ĳ������ �����߳� �����߳� �Ǵ��غ��� ���ø� �Լ� 
	//gui ���α׷��� �Ҷ� ����ϰ� ���̴� ����̶�� �Ѵ�.
	if (FromString(st2, d))
		std::cout << d << std::endl;
	else
		std::cout << "ĳ���� ����" << std::endl;

	if (FromString(my_string, d))
		std::cout << d << std::endl;
	else
		std::cout << "ĳ���� ����" << std::endl;
	
	int i = std::stoi(st); //��Ʈ��-> ��Ʈ�� ĳ����
	int f = std::stof(st); //��Ʈ��-> ��Ʈ�� ĳ����




}