#include<iostream>
#include<string>
#include<vector>

#include<sstream> //string stream

/// <summary>
/// 파라미터로 들어온게 무엇이든간에 string으로 만들어서 리턴해주는 템플릿 함수
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
	std::istringstream isstream(str); //인풋스트링스트림에 str넣어서 초기화
	return (isstream >> x) ? true : false;

}

int main()
{
	///////////////////////////////////////////
	//스트링의 생성자
	///////////////////////////////////////////


	std::string my_string("my String");
	std::cout << my_string << std::endl;

	std::string my_string2(my_string,3);
	std::cout << my_string2 << std::endl;
	// 앞에서 3개 문자를 지운다.

	std::string my_string3(my_string, 3,5);
	std::cout << my_string3 << std::endl;
	// 앞에서 3개 문자를 지우고 그 다음 5개 문자를 가져온다.

	std::string my_string4(10, 'A');
	std::cout << my_string4 << std::endl;
	// 앞에서 10개에 A를 넣는다


	std::vector<char> vec;
	for (auto e : "Today is a good day.")
		vec.push_back(e);

	std::string my_string5(vec.begin(), vec.end());
	std::cout << my_string5 << std::endl;
	//벡터에 문자열을 넣고 스트링으로 출력
	//stl의 이터레이터와 함께 사용할 수 있다.


	std::string my_string6(vec.begin(), std::find(vec.begin(),vec.end(),'y'));
	std::cout << my_string6 << std::endl;
	//벡터에 넣은 문자열 중에서 시작부터 y의 바로 앞까지 출력


	std:: cout<< std::endl << std::endl;

	///////////////////////////////////////////
	//스트링의 형변환
	///////////////////////////////////////////
	
	//std::string st(4)  이렇게 쓰면 에러난다
	std::string st(std::to_string(4)); //스트링으로 캐스팅해야함.

	std::string st2(ToString(4)); //아니면 템플릿 만들어 쓰던지~

	double d;
	//캐스팅이 성공했나 실패했나 판단해보는 템플릿 함수 
	//gui 프로그래밍 할때 요긴하게 쓰이는 방식이라고 한다.
	if (FromString(st2, d))
		std::cout << d << std::endl;
	else
		std::cout << "캐스팅 실패" << std::endl;

	if (FromString(my_string, d))
		std::cout << d << std::endl;
	else
		std::cout << "캐스팅 실패" << std::endl;
	
	int i = std::stoi(st); //스트링-> 인트로 캐스팅
	int f = std::stof(st); //스트링-> 인트로 캐스팅




}