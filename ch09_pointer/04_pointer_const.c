/*
  const(상수)
  포인터에서 const의 의미는?
    - 포인터 변수가 가르키는 변수를 간접참조연산자로 변환 불가! 
    - 포인터 변수를 read-only로 사용하고 싶을 때 
*/

#include <stdio.h>

int main(){
    int a = 10, b = 20;
    const int *pa = &a;  // pa → a

    printf("변수 a 출력: %d\n", *pa);
    pa = &b;             // pa → b
    printf("변수 b 출력: %d\n", *pa);
    pa = &a;             // pa → a
    a = 80;

    // const 포인터 변수는 간접참조연산자로 값 변경 불가
    // *pa = 99; (X)
    printf("변수 a 출력: %d\n", *pa);
}