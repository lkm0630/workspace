#include <stdio.h>

void main()
{
	char *p = "KOREA";
    printf("%s\n" , p);        // KOREA
    printf("%s\n" , p+3);      // EA
    printf("%c\n" , *p);       // K
    printf("%c\n" , *(p+3));   // E
}