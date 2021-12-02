# 6장 변수범위와 변수형

## 목차 

[6. 배열](#1)

[6.1 포인터](#1)

********
<div id="1"></div>

## 배열에 관한 몰랐던 정보들 

1. 배열이 함수의 파라미터로 들어갈 경우, 배열의 포인터가 복사되어 들어간다. 즉 원래 배열과 시작 포인터의 주소값이 다르다.

2. 일반적으로 배열은 행(row) , 열(column) 순서로 표현되므로 row-major 방식이다.

3. 배열에 문자열을 입력하면, 맨 마지막에 null이 들어간다.

4. cout으로 배열문자열을 출력하면, null(공백)을 만날 때까지 출력하는 방식이다. 따라서 중간에 null을 넣으면 딱 그전까지만 출력을 하게 된다.
5. 한 줄을 cin으로 받아서 출력하게 하려면 cin.getline을 써야한다

 ---------
<div id="2"></div>

## 포인터의 기본적인 사용법

1. &(addres-of operator) 를 붙여서 메모리 주소를 16진수로 표현한다.
   - 포인터의 사이즈는 32비트에서 4바이트, 64비트에서 8바이트

2. de-reference operator ( * )
   - pointer가 간접적으로 가리키는 것(주소)이라면, de-reference *는 직접 주소의 값에 접근하겠다는 의미이다. 
   - ex) cout << *(&x) << endl;
   - & 과 *는 서로 상충된다고 보면 된다.
   - 포인터 변수를 선언할 때, *는 변수쪽에 붙어야 헷갈리지 않는다.
     - ex) int *a, *b;
     - 이 예시에서 a는 포인터 변수, *a는 dereference 된 값이라고 읽는다.

3. Null Pointer
   - 포인터 변수를 선언할 때, 0 또는 null로 초기화를 해주어 오류를 방지하는 것.
   - **modern c++ 스타일에서는 nullptr을 사용한다.**


4. 포인터 연산과 배열 인덱싱
   - 포인터 변수에 상수를 더하면, 포인터 변수 타입(int,double..)의 사이즈 만큼 더해진 주소가 나온다. 
   - 배열에서도 마찬가지로 사이즈만큼 더해져서 인덱싱되는데, 포인터 연산과 동일하게 작동한다.  

5. C언어 스타일의 문자열 심볼릭 상수 
   - ``` c++
      const char *name = "Jack j";
      const char *name2 = "Jack j"

      -> name 과 name2의 주소값은 동일하게 나온다        
       ```  
   - 위와 같은 형식으로 작성된 문자열은, 컴파일러가 메모리에 고정해서 상수처럼 사용할 수 있다.

   - cout에서 문자열의 주소를 출력하게 하면 주소가 아닌, \0 가 나올 때까지 쭉 출력한다. 
     - 따라서 char 변수 하나를 cout 으로 주소를 출력하게 하면 \0이 없어 쓰레기 값도 함께 출력된다.

6. 포인터와 const
    - ``` c++
      const int value = 5;

      //*ptr의 값을 변경할 수 없다. 즉 ptr로 원본 데이터를 수정할 수 없음
      const int *ptr1 = &value;

      //ptr에 할당된 주소를 변경할 수 없다. *ptr로 원본 데이터는 수정할 수 있음
      int *const ptr2 = &value;

      //ptr의 주소도, *ptr의 값도 전부 변경할 수 없다.
      const int *const ptr3 = &value;
      ```  
   - 함수 파라미터로 넣을 때 안전한 코드를 만들기 위해 사용하는 경우가 있다.

7. 참조변수 Reference Variable
   - ``` c++

      // &ref는 value의 또 다른 이름이라고 보면 된다.
	   // &ref는 반드시 처음에 초기화 되어야 한다.
	   // &ref는 literal로 초기화 할 수 없다. 변수가 들어가야 한다.
      int value = 5;
      int &ref = value;


       ```  
   - 참조변수를 파라미터로 쓰면 복사되어 넘어가는 메모리도 줄이면서 포인터처럼 쓸 수 있다!!
   - *복잡하게 들어가서 접근하는 변수를 손쉽게 캐싱하는 용도로 자주쓴다!*
   - ``` c++
      int value = 5;

      int &ref = value;
      int *const ptr2 = &value;
      // 이 두가지 코드는 동일하다고 볼 수 있다.
       ```  

8. 참조와 const
     - ``` c++

      //참조변수를 const시키면 literal도 넣을 수 있게 된다!!
      int value = 5;
      const int &ref = value;
      &ref = 3 * 4;
       ```  

      - 파라미터로 이것을 쓰면 변수가 아닌 literal도 쓸수있어 활용성이 좋아진다.

9. C++ For-each 반복문
   - #include<algorithm> 이 필요하다.
   - ``` c++
      int fibonachi[] = { 0,1,1,2,3,5,8,13,21,34,55,89};

      //for()내부는 파라미터와 같아서 복사되어 들어간다. 
      //따라서 number를 변경해도 배열은 변하지 않는다.
      for(int number : fibonachi)
         number = 10;

      //레퍼런스로 받는다면 배열의 값을 변경할 수 있다.
      for(int &number : fibonachi)
         number = 10;

      //보통 auto로 둬서 편하게 사용한다.
      for(auto &number : fibonachi)
         number = 10;

      //배열 내부를 수정하지 못하도록 for-each사용하기
      for(const auto &number : fibonachi)
         cout<< number <<" ";
      ```

   - 단, for-each는 동적할당된 배열에는 사용할 수 없다!!


10. Void Pointer 
	- generic pointer라고도 하며 어떤 자료형이든 void* 에 담을 수 있다.
	- 하지만 디레퍼런싱을 하려면 원하는 자료형으로 캐스팅이 필수적이다.

## 다중 포인터와 동적 다차원 배열 
	- 이중포인터는 이차원행렬 구현할 때 자주 쓴다.
	
## std::array 
	- #include <array> 가 필요하다.
	- std::array<type,size> name 순으로 선언.
	- .at, .size 처럼 여러 기능을 편리하게 이용가능
	- .at(num) 은 [num]과 같은 기능이지만 옳지않은 접근에 대해 예외처리를 해준다.


