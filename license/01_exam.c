#include <stdio.h>

void main(){
	// "KOREA" → 101번지
	// p → 101번지  	
	// p+1 → 주소 연산: 101번지 + 1*char(1Byte) = 102번지 
	char *p = "KOREA";
    printf("%s\n" , p);        // KOREA : 101번지부터 널문자까지 출력 
    printf("%s\n" , p+3);      // EA    : 104번지부터 널문자까지 출력
    printf("%c\n" , *p);       // K     : 간접참조 101번지 값
    printf("%c\n" , *(p+3));   // E     : 간접참조 104번지 값 
}