#include <stdio.h>


int val= 0b0000000000000000; //16bit

int IP1 = 1;
int IP2 = 1;
int IP3 = 1;
int IP4 = 1;
int IP5 = 1;
int IP6 = 1;
int IP7 = 1;
int IP8 = 1;
int IP9 = 1;
int IP10 = 1;
int IP11 = 1;
int IP12 = 1;
int IP13 = 1;
int IP14 = 1;
int IP15 = 1;
int IP16 = 1;



void PrintBits(int a_data)
{
    printf("BINARY :");
    // 8비트를 모두 출력한다.
    for (int i = 0; i < 8; i++) {
        // i번째 비트를 1 또는 0으로 출력한다.
        printf("%d", (a_data & (0x80 >> i)) >> (7 - i)); //1일때~3일때
    }
    printf("\n");  // 줄바꿈을 한다.
}

void main(void)
{
    
        //만약 IP네트 값이 1이면 해당 CN가 연결된 것
    
        if (IP1 == 1)
            val = val | 0b0000000000000001; // 16진수 : 0x0001
        if (IP2 == 1)
            val = val | 0b0000000000000010; // 16진수 : 0x0002
        if (IP3 == 1)
            val = val | 0b0000000000000100; // 16진수 : 0x0004
        if (IP4 == 1)
            val = val | 0b0000000000001000; // 16진수 : 0x0008
        if (IP5 == 1)
            val = val | 0b0000000000010000; // 16진수 : 0x0010
        if (IP6 == 1)
            val = val | 0b0000000000100000; // 16진수 : 0x0004
        if (IP7 == 1)
            val = val | 0b0000000001000000; // 16진수 : 0x0004
        if (IP8 == 1)
            val = val | 0b0000000010000000; // 16진수 : 0x0004
        if (IP9 == 1)
            val = val | 0b0000000100000000; // 16진수 : 0x0004
        if (IP10 == 1)
            val = val | 0b0000001000000000; // 16진수 : 0x0004
        if (IP11 == 1)
            val = val | 0b0000010000000000; // 16진수 : 0x0004
        if (IP12 == 1)
            val = val | 0b0000100000000000; // 16진수 : 0x0004
        if (IP13 == 1)
            val = val | 0b0001000000000000; // 16진수 : 0x0004
        if (IP14 == 1)
            val = val | 0b0010000000000000; // 16진수 : 0x0004
        if (IP15 == 1)
            val = val | 0b0100000000000000; // 16진수 : 0x0004
        if (IP16 == 1)
            val = val | 0b1000000000000000; // 16진수 : 0x0004
        PrintBits(val);
 
}