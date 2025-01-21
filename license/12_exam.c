#include <stdio.h>


// 문제: 입력값 홍길동, 김철수, 박영희 순서로 주어진다.

char n[30];
char *test() {
    printf("입력하세요 : ");
    gets(n);
    return n;
}

int main() {
    char *test1;
    char *test2;
    char *test3;

    test1 = test();
    test2 = test();
    test3 = test();

    printf("%s\n", test1);
    printf("%s\n", test2);
    printf("%s\n", test3);
}