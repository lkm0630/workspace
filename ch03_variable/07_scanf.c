#include <stdio.h>

/*
  printf() → 출력
  scanf()  → 입력(사용자로부터 값을 입력)
  ex) scanf("%d", &a);
     %d: int형 변환 문자
     %a: 입력값을 저장할 변수
     → 사용자가 입력한 값을 정수형으로 변환한 뒤 a변수에 저장 
*/

int main(){
    int a;
    scanf("%d", &a);
    printf("입력값: %d\n", a);
}