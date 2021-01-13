#include <iostream>

//반환형은 auto가 가능하지만, 파라미터에는 auto 불가능
// 선언부 옆에 -> 를 쓰고 자료형을 쓰면, 리턴타입을 명시하는 셈 (trailing return type)
// auto 대신 리턴타입을 써도 되지만, 오버로딩이 많이 있을 경우 보기 편하다
auto add(int x, int y) -> int
{
    return x + (double)y;
}

auto add(int x, int y) -> int;

int main()
{
    using namespace std;

    //자동으로 자료형을 결정.
    //초기화가 되어야 auto를 사용할 수 있다 
    auto a = 123;
    auto b = 123.0;
    auto c = 1 + 2;
    auto d = 1.0 + 2;

    auto result = add(1,2);

    return 0;
}