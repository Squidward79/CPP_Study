
//#pragma once 

//header guard. 전처리기의 일종이다.
//밑에 ifndef 의 과정을 pragma one가 한줄로 처리해 준다.

#ifndef MY_ADD 
//if not define,  MY_ADD가 이미 정의가 되어있다면 다시 정의하지 말라
//즉, 인클루드 되어있다면 또 인클루드 하지 않게 하는 것
#define MY_ADD


int add(int a, int b);

#endif