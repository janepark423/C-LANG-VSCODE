#include <stdio.h>

/*

[[[[IF문과 FOR문 사용한 INPUT 코드]]]]

*/

int val = 0b0000000000000000; // 16bit
int ips[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};




void PrintBits(int a_data)
{
    printf("BINARY :");
    // 8비트를 모두 출력한다.
    for (int i = 0; i < 16; i++) {
        // i번째 비트를 1 또는 0으로 출력한다.
        printf("%d", (a_data & (0x8000 >> i)) >> (15 - i)); 

        /*
                              0x8000 1000 0000 0000 0000과 같다.
                              1번째 (a_data & (1000 0000 0000 0000 >> 0 )) >> (15)  
                                                 1000 0000 0000 0000 >> 15 
                                                 0000 0000 0000 0001
                              2번째 (a_data & (1000 0000 0000 0000 >> 1 )) >> (14)
                                                  0100 0000 0000 0000 >> 14      
                                                  0000 0000 0000 0001                                          
                              3번째 (a_data & (1000 0000 0000 0000 >> 2 )) >> (13)    
                                                  0010 0000 0000 0000 >> 13
                                                  0000 0000 0000 0001
                              4번째 (a_data & (1000 0000 0000 0000 >> 3 )) >> (12)
                                                  0001 0000 0000 0000 >> 12
                                                  0000 0000 0000 0001
                              5번째 (a_data & (1000 0000 0000 0000 >> 4 )) >> (11)
                                                  0000 1000 0000 0000 >> 11
                                                  0000 0000 0000 0001
                              6번째 (a_data & (1000 0000 0000 0000 >> 5 )) >> (10)
                                                  0000 0100 0000 0000 >> 10
                                                  0000 0000 0000 0001
                              7번째 (a_data & (1000 0000 0000 0000 >> 6 )) >> (9)
                                                  0000 0010 0000 0000 >> 9
                                                  0000 0000 0000 0001
                              8번째 (a_data & (1000 0000 0000 0000 >> 7 )) >> (8)
                                                  0000 0001 0000 0000 >>
                                                  0000 0000 0000 0001 
                              9번째 (a_data & (1000 0000 0000 0000 >> 8 )) >> (7)
                                                  0000 0000 1000 0000 >> 
                                                  0000 0000 0000 0001
                              10번째 (a_data & (1000 0000 0000 0000 >> 9 )) >> (6)
                                                  0000 0000 0100 0000 >> 
                                                  0000 0000 0000 0001
                              11번째 (a_data & (1000 0000 0000 0000 >> 10 )) >> (5)
                                                  0000 0000 0010 0000 >>
                                                  0000 0000 0000 0001 
                              12번째 (a_data & (1000 0000 0000 0000 >> 11 )) >> (4)
                                                  0000 0000 0001 0000 >> 
                                                  0000 0000 0000 0001
                              13번째 (a_data & (1000 0000 0000 0000 >> 12 )) >> (3)
                                                  0000 0000 0000 1000 >> 
                                                  0000 0000 0000 0001
                              14번째 (a_data & (1000 0000 0000 0000 >> 13 )) >> (2)
                                                  0000 0000 0000 0100 >> 
                                                  0000 0000 0000 0001
                             15번째 (a_data & (1000 0000 0000 0000 >> 14 )) >> (1)
                                                  0000 0000 0000 0010 >> 
                                                  0000 0000 0000 0001
                             16번째 (a_data & (1000 0000 0000 0000 >> 15)) >> (0)
                                                  0000 0000 0000 0001 >> 
                                                  0000 0000 0000 0001
            */
    }
    printf("\n");  // 줄바꿈을 한다.
}

void main(void)
{
    
        //만약 IP네트 값이 0이면 해당 CN가 연결된 것

        
        for(int cnt=0; cnt<16; cnt++){
           if (ips[cnt] == 0)
            val = val + (1 << cnt);
        }
        /*    
        if (ips[0] == 1)
            val = val | 0b0000000000000001; // 16진수 : 0x0001
        if (ips[1] == 1)
            val = val | 0b0000000000000010; // 16진수 : 0x0002
        if (ips[2] == 1)
            val = val | 0b0000000000000100; // 16진수 : 0x0004
        if (ips[3] == 1)
            val = val | 0b0000000000001000; // 16진수 : 0x0008
        if (ips[4] == 1)
            val = val | 0b0000000000010000; // 16진수 : 0x0010
        if (ips[5] == 1)
            val = val | 0b0000000000100000; // 16진수 : 0x0004
        if (ips[6] == 1)
            val = val | 0b0000000001000000; // 16진수 : 0x0004
        if (ips[7] == 1)
            val = val | 0b0000000010000000; // 16진수 : 0x0004
        if (ips[8] == 1)
            val = val | 0b0000000100000000; // 16진수 : 0x0004
        if (ips[9] == 1)
            val = val | 0b0000001000000000; // 16진수 : 0x0004
        if (ips[10] == 1)
            val = val | 0b0000010000000000; // 16진수 : 0x0004
        if (ips[11] == 1)
            val = val | 0b0000100000000000; // 16진수 : 0x0004
        if (ips[12] == 1)
            val = val | 0b0001000000000000; // 16진수 : 0x0004
        if (ips[13] == 1)
            val = val | 0b0010000000000000; // 16진수 : 0x0004
        if (ips[14] == 1)
            val = val | 0b0100000000000000; // 16진수 : 0x0004
        if (ips[15] == 1)
            val = val | 0b1000000000000000; // 16진수 : 0x0004

            */
        PrintBits(val);
 
}