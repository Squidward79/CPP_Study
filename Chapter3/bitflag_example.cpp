#include <iostream>
#include <bitset>

int main()
{
    unsigned char option_viewed = 0x01;
    unsigned char option_edited = 0x02;
    unsigned char option_liked = 0x04;
    unsigned char option_shared = 0x08;
    unsigned char option_deleted = 0x80;

    unsigned char my_article_flags = 0;

    return 0;
}


/**
 * 다음 경우에 플래그를 바꾸시오
 * 1. 기사를 봤을 때
 * 2. 기사의 좋아요를 클릭했을 때
 * 3. 기사의 좋아요를 다시 클릭했을 때
 * 4. 본 기사만 삭제할 때
 * 
**/