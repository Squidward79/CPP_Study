#include <iostream>
#include <bitset> //10진수를 2진수로 바꿔서 출력해주는 라이브러리

using namespace std;


void LeftShift_Operator(int num, int count);
void RightShift_Operator(int num, int count);
void Not_Operator(int num);

int main()
{
    cout << "left shift" << endl;

    unsigned int a = 3;

    cout << std::bitset<4>(a) << endl;
    //a가 내부적으로 어떻게 저장되는지 보여준다

    LeftShift_Operator(a, 1);
    LeftShift_Operator(a, 2);
    LeftShift_Operator(a, 3);
    LeftShift_Operator(a, 4);

    cout << "right shift" << endl;

    a = 1024;
    RightShift_Operator(a,1);
    RightShift_Operator(a,2);
    RightShift_Operator(a,3);
    RightShift_Operator(a,4);

    cout << "not" << endl;

    Not_Operator(1024);

    cout << "2진수로 표기" << endl;

    unsigned int x = 0b1100; 
    unsigned int y = 0b0110;

    //0b를 앞에 붙이면 2진수 표현으로 바로 적을 수 있다
    cout << x << " " << y << endl;

    cout << "and or xor" << endl;

    // and
    cout <<std::bitset<4>(x & y) << endl;

    // or
    cout <<std::bitset<4>(x | y) << endl;

    // xor
    cout <<std::bitset<4>(x ^ y) << endl;

    //퀴즈 

    cout<< (0b0110 >> 2) <<endl;
    //2진수로 연산하면 2진수로 나온다 
    
    cout<< (5 & 12) << " " <<(5 | 12) << " " << (5 ^ 12) <<endl;
    // 결과값은 10진수로 나온다 


    return 0;
}

void LeftShift_Operator(int num, int count)
{
    int c = num << count;
    cout << std::bitset<4>(num << count)<< " " << c << endl;
}

void RightShift_Operator(int num, int count)
{
    int c = num >> count;
    cout << std::bitset<16>(num >> count)<< " " << c << endl;
}

void Not_Operator(int num)
{
    cout << std::bitset<16>(~num)<< " " << ~num << endl;
}
