#include <iostream>
#include <bitset>

using namespace std;

void DisplayItemOnMessage(string message, unsigned char flag);

int main()
{
    const unsigned char opt0 = 1 << 0; // << 0 은 아무일도 없다
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;
    const unsigned char opt4 = 1 << 4;
    const unsigned char opt5 = 1 << 5;
    const unsigned char opt6 = 1 << 6;
    const unsigned char opt7 = 1 << 7;

    //8개의 아이템 표기를 위해 1byte char를 이용한다
    unsigned char item_flag = 0;

    // no item
    DisplayItemOnMessage("No item", item_flag); 

    //item1 on
    item_flag |= opt1;
    DisplayItemOnMessage("item1 on", item_flag);

    //item3 on
    item_flag |= opt3;
    DisplayItemOnMessage("item3 on", item_flag);

    //item3 lost
    item_flag &= ~opt3;
    DisplayItemOnMessage("item3 lost", item_flag);

    //has item1?
    if (item_flag & opt1)
    {
        //opt1 자리의 값이 1이면 true를 리턴한다.
        cout<< "has item1" <<endl;
    }
    else 

    //has item0?
    if(item_flag & opt0 )
    {
        cout<< "has item0" << endl;
    }

    //obtain item2,3 동시에 갖게 될 때
    item_flag |= (opt2 | opt3);
    DisplayItemOnMessage("item2,3 obtained", item_flag);


    if((item_flag & opt2) && !(item_flag & opt1) )
    {
        //2는 있고 1은 없을 때 

        //상태를 전환할 때는 ^ 연산
        item_flag ^= opt2;
        item_flag ^= opt1;
        //두개를 합치면 item_flag ^= (opt2 | opt1);
        
        DisplayItemOnMessage("state change", item_flag);

    }

    return 0;
}

void DisplayItemOnMessage(string message, unsigned char flag)
{
    cout << message << " " << bitset<8>(flag) << endl;
}