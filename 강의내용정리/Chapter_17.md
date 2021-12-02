# 3장 연산자

## 목차

[3.1. string, wstring](#1)

[3.2. string의 생성자와 형변환](#2)

[3.3. string, wstring](#3)





********
<div id ="1"></div>

## string, wstring

- #include<string> 이 필요하다.
- string과 wstring은 둘 다 basic_string<>의 인스턴스
- wstring의 w는 *wide*의 의미
- wstring은 wchar_t형으로 받아지는데, wchar_t는 결국 unsigned char이다.
  - 즉, 데이터 사이즈가 큰 문자열을 표현할 때 사용(wide character, unicode 등)

- string의 길이와 용량
	- ```c++
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
	  ```
  
  ********
<div id ="2"></div>
  
## string의 생성자와 형변환
  
  1. 생성자 오버로딩이 굉장히 다양하게 되어있다.
  
  ``` c++
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
  ```
  
  2. 이터레이터도 함께 사용할 수 있다.
  
  ```c++
    std::string my_string6(vec.begin(), std::find(vec.begin(),vec.end(),'y'));
	  std::cout << my_string6 << std::endl;
	  //벡터에 넣은 문자열 중에서 시작부터 y의 바로 앞까지 출력
  ```
  
  3. 스트링으로의 형변환
  - 다른 타입을 string에 넣기 위해서`std::to_string(text)` 를 쓴다. 
  - c#에서 자주 쓰던 toString과 같은 기능. 다양한 형식으로 사용할 수 있음.
	
	
  3-1. 스트링에서 다른 타입으로의 형변환
  ```c++
    int i = std::stoi(st); //스트링-> 인트로 캐스팅
	  int f = std::stof(st); //스트링-> 인트로 캐스팅
  ```
  
  4. ToString 템플릿 함수
  - 템플릿함수로 만들어서 무엇이든 string으로 리턴해주는 함수를 만들어 쓸 수 도 있다.
  ```c++
    #include<string>
    #include<sstream> //string stream
  
    template <typename T>
    std::string ToString(T x)
    {
	    std::ostringstream osstream;
	    osstream << x;
	    return osstream.str();
    }
  ```
  

********
<div id ="3"></div>
  
## string의 대입,교환,덧붙이기,삽입

1. 덧붙이기
	- .append(text);
	- string1.push_back(char); 
	- += text; string1 + string2 로 연산자처럼 쓰기도 가능
	- 여러번 체이닝(.~~.~~으로 연결하는것)해서 쓸 수 있다.
	
2. 교환
	- std::swap(string1, string2)
	- string1과 2를 교환
	- string1.swap(string2) 처럼 사용도 가능
	
3. 삽입
	- string1.insert(n, text);
		* n번째 자리에 text를 삽입하라는 의미!
  
