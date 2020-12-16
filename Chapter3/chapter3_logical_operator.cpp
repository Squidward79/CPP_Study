#include <iostream>

/// 논리 연산자 

using namespace std;

int main()
{
   
    bool x = true;
    bool y = false;

    cout<< !x << endl;

    cout << (x && y) << endl;
    // x, y가 둘 다 true일 때만 true

    cout << (x || y) << endl;
    // x, y중 하나만 true여도 true


#pragma region [short circuit evaluation]

    int a = 2;
    int b = 2;

    if(x == 2 && y++ == 2)
    {
        //이때 y는 3이 나온다.
    }

    //&&연산자는 false를 만나는 순간 먼저 끝나기 때문에,
    if(x == 1 && y++ == 2)
    {
        //이 경우 x == 1 에서 if문을 바로 빠져나와,
        //y++가 실행되지 않고 바로 빠져나온다.

        //!!! 코드가 짧아질 수 있지만 리딩에 주의가 필요한 케이스!
    }

    cout <<"y의 값은 " << y << endl;

#pragma endregion [short circuit evaluation]

    // De Morgan`s Law (분배법칙 적용안됨)
        !(x && y); 
        !x && !y; 
    //위의 두 경우는 다르다!
    //물론 이따위로 가독성 구리게 코드를 짜지는 말자.

    //XOR (서로 다른 값일 때 트루)
        //false false -> false
        //false true -> true
        //true false -> true
        //true true -> false
    
    //c++에 xor 연산자는 없기 때문에 아래처럼 사용
    if( x != y) 
    {

    }


    //연습문제
    bool ex = (14 > 13 || 2 > 1) && (9 > 1);
    cout<< "ex의 값은 " << ex << endl;
    ex = !(2314123 > 2 || 123123 > 2387);
    cout<< "두번째 ex의 값은 " << ex << endl;


    //연산자 우선순위는 &&가 ||보다 높다 
    bool v1 = true;
    bool v2 = false;
    bool v3 = false;

    bool r1 = v1 || v2 && v3;
    bool r2 = (v1 || v2) && v3;
    bool r3 = v1 || (v2 && v3);

    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;


    return 0;

}