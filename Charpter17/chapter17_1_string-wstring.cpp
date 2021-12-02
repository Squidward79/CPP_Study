#include <string>
#include <cstddef>
#include <iostream>
#include <locale>



int main(void)
{
	//c-style string example
	/*
	{
		char *strHello = new char[7];
		strcpy_s(strHello, sizeof(char) *7,"Hello!");
		std::cout<< strHello <<std::endl;
	}
	*/

	// basic_string<> , string, wstring
	{
		std::string string;
		std::wstring wstring;
		//둘다 basic_string<>의 인스턴스로 만들어진 것.
		//wstirng 의 w는 wide의 의미다.

		wchar_t wc;
		//wchar_t 는 결국 unsigned char.
		//데이터 사이즈가 큰 문자열을 표현할 때 사용한다. (wide character, unicode)

		const std::wstring texts[] = 
		{
			L"안녕하세요?",
			L"Ñá", //Spanish
			L"forêt intérêt", //French
			L"Gesäß", //German
			L"取消波蘇日奇諾", //Chinese
			L"日本人のビット", //Japanese
			L"немного русский", //Russian
			L"ένα κομμάτι της ελληνικής", // Greek
			L"ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ", // Punjabi (wtf?). xD
			L"کمی از ایران ", // Persian (I know it, from 300 movie)
			L"కానీ ఈ ఏమి నరకం ఉంది?", //Telugu (telu-what?)
			L"Но какво, по дяволите, е това?" //Bulgarian
		};

		std::locale::global(std::locale(""));
		std::wcout.imbue(std::locale());

		for (size_t i = 0; i < 11; i++)
		{
			std::wcout << texts[i] << std::endl;
		}


		std::cout << std::endl << std::endl;

		//////////////////////////////////
		// string의 길이와 용량 
		//////////////////////////////////

		std::string my_str("0123456789");
		std::cout << my_str.size() << std::endl;
		//c스타일과 달리 맨 마지막 null character를 별도로 보관하지 않는다.

		std::string my_str2("");
		std::cout << std::boolalpha; //true false값을 true false로 출력되도록 함
		std::cout << my_str2.empty() << std::endl;
		//string에서는 "" 을 넣어도 빈 값으로 인식한다!!

		std::cout << my_str2.capacity() << std::endl;
		//여분의 용량을 잡아서 재할당을 최소화 하려고 한다.

		my_str.reserve(1000); 
		//string의 최소 크기를 미리 잡아두는 것을 의미한다.

		std::cout << my_str2.max_size() << std::endl;
		//최대 string 길이

	}
}