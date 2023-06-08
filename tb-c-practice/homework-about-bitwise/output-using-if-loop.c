#include <stdio.h>

/*

[[[[OUTPUT 코드]]]]

*/
int val = 0b0000000000000000; // 16bit
int ips[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};




void PrintBits(int a_data)
{
    printf("BINARY :");
    // 8비트를 모두 출력한다.
    for (int i = 0; i < 8; i++) {
        // i번째 비트를 1 또는 0으로 출력한다.
        printf("%d", (a_data & (0x80 >> i)) >> (7 - i)); //1일때~3일때
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
    
        //만약 IP네트 값이 0이면 해당 CN가 연결된 것

        
        for(int cnt=0; cnt<16; cnt++){
           if (ips[cnt] == 0)
            val = val + (1 << cnt);
        }
        
        PrintBits(val);
 
}