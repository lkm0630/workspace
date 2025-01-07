#include <stdio.h>

/*
  unsigned 정수 자료형
    - 정수형은 보통 양수와 음수 모두 저장 (-100~100)
    - 양수만 저장하면 2배 넓은 범위 값 저장 가능(0~200)
    - 나이와 같이 음수가 없는 데이터는 unsigned 사용
    - 자료형에 unsigned만 붙이면 됨
    - default는 signed
*/

int main(){
    unsigned int a;  // 양수값 2배 범위 
    a = 4294967295;  // 2147483647 x2 +1
    printf("%dn", a);  // 부호 추가해서 10진수 출력
    a = -1;
    printf("%u\n", a);  // 부호 없이 10진수 출력 

}