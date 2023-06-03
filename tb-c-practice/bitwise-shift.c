#define _CRT_SECURE_NO_WARNINNGS

#include <stdio.h>
#include <string.h> // strlen()
#include <stdlib.h> // exit()
#include <stdbool.h>

void int_binary(const int num) {
    printf("Decimal %12d == Binary ", num);

    const size_t bits = 8;
    //const size_t bits = sizeof(num) * CHAR_BIT;
    //CHAR_BIT 문자 유형의 변수에 있는 비트 수
    for (size_t i = 0; i < bits; i++) {
        const char mask = 1 << (bits - 1 - i);
        // 앞에서는 쉬프트 연산자를 배우기 전이라서 pow()함수를 사용했었다. 
        //쉬프트 연산자를 사용하는 게 더 효율적이며 C/C++에 걸맞는 방식이다

        if ((num & mask) == mask)
            printf("%d", 1);
        else
            printf("%d", 0);
    }
    printf("\n");
}

int main(void) {
   

    printf("%hhd\n", 8 << 2);       // 00000001  ->  00000001???     ->  00001000   // 왼쪽으로 벗어난 부분은 절삭. 오른쪽에 새로 생긴 부분은 0으로 채운다
    printf("%hhd\n", 8 >> 1);       // 00001000  ->     ?00001000    ->  00000100   // 오른쪽으로 벗어난 부분은 절삭. 왼쪽에 새로 생긴 부분은 이 경우에는 0으로 채운다


  
    int_binary(0x01);
    printf("\nRight shift by 3\n");

    int_binary(0b00000001 << 1);

    return 0;
}