#include <iostream>

using namespace std;

//전방선언만 해도 몸체를 찾아서 실행한다.
extern void doSomething();

// void doSomething()
// {
//     static int a = 1;

//     ++a;

//     cout <<a << endl;
// }

int main()
{
    doSomething();
    doSomething();
    doSomething();
    doSomething();

    //결과-> 2 3 4 5 

    return 0;
}