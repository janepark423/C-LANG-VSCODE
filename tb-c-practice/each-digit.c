#include <stdio.h>
 
int main()
{
    int numVal = 0b1010;
    int res = 0;
 
    // while (numVal != 0)
    // {
    //     printf("%d ", numVal % 10);
 
    //     numVal /= 10;
    // }
 
    res = (numVal >> 1) ;
    printf("%d\r\n",res);

    return 0;
}