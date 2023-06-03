#define _CRT_SECURE_NO_WARNINNGS
#include <stdio.h>
#include <string.h> // strlen()
#include <stdlib.h> // exit()
#include <stdbool.h>

void int_binary(const int num) {
    printf("Decimal %12d == Binary ", num);

    const size_t bits = sizeof(num) * CHAR_BIT;
    for (size_t i = 0; i < bits; i++) {
        const char mask = 1 << (bits - 1 - i);  // 앞에서는 쉬프트 연산자를 배우기 전이라서 pow()함수를 사용했었다. 쉬프트 연산자를 사용하는 게 더 효율적이며 C/C++에 걸맞는 방식이다

        if ((num & mask) == mask)
            printf("%d", 1);
        else
            printf("%d", 0);
    }
    printf("\n");
}

int main(void) {
    /*
        Bitwise shift operators

        - Left shift
        number << n : multiply number by 2^n
        (단, 비트이동 결과로 왼쪽 부분이 절삭되기 떄문에 항상 2^n을 곱한 결과가 나오는 것은 아니다. ex. 아래 예제 중 137 << 4)

        - Right shift
        number >> n : divide by 2^n
        (for non-negative numbers. 비트이동 결과로 오른쪽 부분이 절삭되어도 정수의 나눗셈은 나머지를 버리므로 number가 양수라면 항상 2^n으로 나눈 결과가 나온다)
    */

    // 8 bit integer cases
    //                                 76543210         76543210         76543210
    printf("%hhd\n", 1 << 3);       // 00000001  ->  00000001???     ->  00001000   // 왼쪽으로 벗어난 부분은 절삭. 오른쪽에 새로 생긴 부분은 0으로 채운다
    printf("%hhd\n", 8 >> 1);       // 00001000  ->     ?00001000    ->  00000100   // 오른쪽으로 벗어난 부분은 절삭. 왼쪽에 새로 생긴 부분은 이 경우에는 0으로 채운다

    // signed -119와 unsigned 137의 비트값은 10001001로 서로 같다
    printf("%hhd\n", -119 >> 3);    // 10001001  ->     ???10001001  ->  11110001 (-15, signed의 경우 새로 생긴 부분을 1로 채운다)
    //printf("%hhd\n", -119 / 3);     // -14
    printf("%hhd\n", 137 >> 3);    // 10001001  ->     ???10001001  ->  00010001 (17, unsigned의 경우 새로 생긴 부분을 0으로 채운다)
    //printf("%hhd\n",  137 / 3);     // 17

    printf("%hhd\n", -119 << 4);    // 10001001  ->  10001001????    ->  10010000 (-112)
    printf("%hhd\n", 137 << 4);    // 10001001  ->  10001001????    ->  10010000 (144)

    // NOTE: the signed result is machine dependent(VS와 GCC 컴파일러에서는 signed 정수의 부호비트가 1이면 새로 생긴 부분도 1로 채운다)

    int a = 1;
    a <<= 3;
    a >>= 2;

    printf("\nUnsigned int %u\n", 0xffffffff);
    printf("\nSigned int %d\n", 0xffffffff);
    int_binary(0xffffffff);
    printf("\nRight shift by 3\n");
    int_binary((signed)0xffffffff >> 3);
    int_binary((unsigned)0xffffffff >> 3);

    printf("\n\nUnsigned int %n\n", 0x00ffffff);
    printf("\nSigned int %d\n", 0x00ffffff);
    int_binary(0x00ffffff);
    printf("\nRight shift by 3\n");
    int_binary((signed)0x00ffffff >> 3);
    int_binary((unsigned)0x00ffffff >> 3);

    return 0;
}