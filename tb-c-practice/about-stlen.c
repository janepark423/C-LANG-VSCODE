#include <stdio.h>
#include <string.h>		// strlen 을 비롯한 문자열에 관련한 함수들 사용을 위한 library 

int main()
{
	char str1[100] = "Hello";
	char str2[] = "Hello";		// index를 입력받은 문자 + 1 만큼으로 맞춤
	char str3[100] = "\0";
	char str4[100] = "\n";
	char str5[100] = " \n";

	printf("%zu %zu\n", sizeof(str1), strlen(str1));	
	printf("%zu %zu\n", sizeof(str2), strlen(str2));
	printf("%zu %zu\n", sizeof(str3), strlen(str3));	
	printf("%zu %zu\n", sizeof(str4), strlen(str4));	
	printf("%zu %zu\n", sizeof(str5), strlen(str5));
	// sizeof는 문자열의 크기, strlen은 null character를 제외한 글자수 출력
    
	return 0;
}