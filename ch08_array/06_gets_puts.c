#include <stdio.h>

int main(){
    // 입력: scanf9() → 문자열 입력(gets)
    // 출력: printf() → 문자열 출력(puts)
    char name[20];
    printf("이름: ");
    gets(name);
    puts("입력된 문자열: ");
    puts(name);  // 자동으로 + "\n" 포함
                 // 문자열만 출력 가능 
}