#include <stdio.h>
 
#define IP_NAME(n)        int IP##n = n;
#define SUM(res, n)     ((res) += (IP##n))
#define PRINT(n)        printf("IP%d = %d\n", n, IP##n)
 
int main()
{
    int res=0;
    int IP;
 
    for(IP=0; IP<10; IP++)
    {
        IP_NAME(IP);
        PRINT(IP);
        SUM(res,IP);
    }
     
    printf("TOTAL : %d\n", res);
 
    return 0;
}
