# 3장 연산자

## 목차

[3.1. string, wstring](#1)




********
<div id ="1"></div>

## string, wstring

- #include<string> 이 필요하다.
- string과 wstring은 둘 다 basic_string<>의 인스턴스
- wstring의 w는 *wide*의 의미
- wstring은 wchar_t형으로 받아지는데, wchar_t는 결국 unsigned char이다.
  - 즉, 데이터 사이즈가 큰 문자열을 표현할 때 사용(wide character, unicode 등)

  
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
  
  
