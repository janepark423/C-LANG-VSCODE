#include <stdio.h>

//3.8 16진수

int main() {
    unsigned int decimal = 4294967295;
    unsigned int binary = 0b11111111111111111111111111111111;
    unsigned int oct = 037777777777;
    unsigned int hex = 0xffffffff;
    
    printf("%u\n", decimal);  // 출력값: 4294967295
    printf("%u\n", binary);  // 출력값: 4294967295
    printf("%u\n", oct);  // 출력값: 4294967295
    printf("%u\n", hex);  // 출력값: 4294967295
    
    printf("%o %x %#o %#x %#X", decimal, decimal, decimal, decimal, decimal);  
    // 출력값: 37777777777 ffffffff 037777777777 0xffffffff 0XFFFFFFFF
    
    return 0;
}