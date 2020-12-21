#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    unsigned int pixel_color = 0xDAA520;
    //0x 를 붙이면 16진수로 표현이 가능하다 

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;
    //가장 큰 값인 FF를 마스크 값으로 사용 

    cout<< bitset<32>(pixel_color) << endl;

    unsigned char red,green,blue;
    //컬러코드는 16진수로 앞부터 두개씩 red, green, blue 로 처리한다.

    //blue를 추출하기 
    blue = pixel_color & blue_mask;
    cout<<bitset<8>(blue) << " " << int(blue) <<endl;

    green = (pixel_color & green_mask) >> 8;
    //1. green값은 32비트의 중앙쯤 있어서 8비트인 char에 제대로 담기지 않는다
    //2. >>를 이용해 옆으로 8비트 밀어버리고 char로 출력한다
    cout<<bitset<8>(green) << " " << int(green) <<endl;

    red = (pixel_color & red_mask) >> 16;
    // green, blue 값을 밀어내야 char 에 담기기 때문에 16비트를 오른쪽으로 민다
    cout<<bitset<8>(red) << " " << int(red) <<endl;
    


    return 0;
}