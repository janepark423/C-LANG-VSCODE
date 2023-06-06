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

int OP1 = 1;
int OP2 = 1;
int OP3 = 1;
int OP4 = 1;
int OP5 = 1;
int OP6 = 1;
int OP7 = 1;
int OP8 = 1;
int OP9 = 1;
int OP10 = 1;
int OP11 = 1;
int OP12 = 1;
int OP13 = 1;
int OP14 = 1;
int OP15 = 1;
int OP16 = 1;







void PrintBits(int a_data)
{
    printf("----BINARY----\r\n");
    // 8비트를 모두 출력한다.
    for (int i = 0; i < 16; i++) {
        // i번째 비트를 1 또는 0으로 출력한다.
        printf("number %d : %d\r\n", i+1, (a_data & (0x8000 >> i)) >> (15 - i)); 
        //1일때~3일때
        //                      0x80은 1000 0000과 같다.
        //                      1번째 (a_data & 0100 0000 ) >> 6
        //                      2번째 (a_data & 0010 0000 ) >> 5 
        //                      3번째 (a_data & 0001 0000 ) >> 4    
        //                      4번째 (a_data & 0000 1000 ) >> 3  
        //                      5번째 (a_data & 0000 0100 ) >> 2
        //                      6번째 (a_data & 0000 0010 ) >> 1
        //                      7번째 (a_data & 0000 0001 ) >> 0
    
    }
    printf("\n");  // 줄바꿈을 한다.

}

void main(void)
{
    
        //만약 IP네트 값이 1이면 해당 CN가 연결된 것
    
        if (IP1 == 0)
            val = val | 0b0000000000000001; // 16진수 : 0x0001
            OP1 =1;
        if (IP2 == 0)
            val = val | 0b0000000000000010; // 16진수 : 0x0002
            OP2 =1;
        if (IP3 == 0)
            val = val | 0b0000000000000100; // 16진수 : 0x0004
            OP3 =1;
        if (IP4 == 0)
            val = val | 0b0000000000001000; // 16진수 : 0x0008
            OP4 =1;
        if (IP5 == 0)
            val = val | 0b0000000000010000; // 16진수 : 0x0010
            OP5 =1;
        if (IP6 == 0)
            val = val | 0b0000000000100000; // 16진수 : 0x0004
            OP6 =1;
        if (IP7 == 0)
            val = val | 0b0000000001000000; // 16진수 : 0x0004
            OP7 =1;
        if (IP8 == 0)
            val = val | 0b0000000010000000; // 16진수 : 0x0004
            OP8 =1;
        if (IP9 == 0)
            val = val | 0b0000000100000000; // 16진수 : 0x0004
            OP9 =1;
        if (IP10 == 0)
            val = val | 0b0000001000000000; // 16진수 : 0x0004
            OP10 =1;
        if (IP11 == 0)
            val = val | 0b0000010000000000; // 16진수 : 0x0004
            OP11 =1;
        if (IP12 == 0)
            val = val | 0b0000100000000000; // 16진수 : 0x0004
            OP12 =1;
        if (IP13 == 0)
            val = val | 0b0001000000000000; // 16진수 : 0x0004
            OP13 =1;
        if (IP14 == 0)
            val = val | 0b0010000000000000; // 16진수 : 0x0004
            OP14 =1;
        if (IP15 == 0)
            val = val | 0b0100000000000000; // 16진수 : 0x0004
            OP15 =1;
        if (IP16 == 0)
            val = val | 0b1000000000000000; // 16진수 : 0x0004
            OP16 =1;
        PrintBits(val);
 
}