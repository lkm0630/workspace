/*
  C언어는 문자열 자료형을 지원하지 않음
    → 그래서 문자열을 char배열로 표현

  문자 배열(문자열)
    - 문자열은 크기가 일정하지 않음(컴파일러는 문자열 상수를 독특한 방법으로 처리)
    - 컴파일 과정에서 문자열을 char배열 형태로 보관하고 문자열 상수가 있던 곳에는
      배열의 위치값을 사용
    ex) char fruit[6] = "apple";은 'a'가 저장된 메모리 주소값으로 바뀜
        printf("%s", "apple");
    - 문자열은 다른 자료형과 달리 크기가 매우 상이함(글자수에 따라)
    - 문자열을 주소로 바꾸면 포인터 연산을 통해 시작위치부터 길이 제한없이 사용 가능
    - 이 경우 문자열의 끝을 알아야하기 때문에 널(\0) 문자를 사용해서 끝을 표시
    - 컴파일러 또한 문자열 상수를 따로 저장할 때 마지막에 항상 널문자를 붙임

    ※ 운영체제는 문자열 상수를 읽기 전용 메모리영역에 저장
       따라서, 그 값을 바꾸는 명령 실행을 제한함 
       ex) *"apple" = 't'; 코드상으로 문제 없지만 실행하면 "강제 종료" 될 수 있음  

    ※ 자료형에 따른 scanf() 사용법 
      ex) int num = 4;
          char name[4] = "lkm";
          int ary[3] = {10, 20, 30};
          scanf("%d", &num);
          scanf("%s", name); 
          // 배열명 → 첫번째 요소의 시작주소  
          //  - ary(주소) + 1 → 주소 연산 
          //  - ary[2] → 세번째 요소의 값 
          scanf("%d", &ary[2]);
          scanf("%d", ary+2);



    ※ 객체지향언어의 Mutable Types과 Immutable Types
      1. Mutable Types: 생성 후 수정 가능한 자료형
        - LIST, DICT
      2. Immutable Types: 생성 후 수정 불가능한 자료형  
        - String(문자열), Tuple, ... 
      → C언어는 절차지향언어이기 때문에 위의 Types를 사용하지는 않지만,
        C언어의 문자열은 Immutable Types와 비슷하다고 생각하면 쉬움  
*/

#include <stdio.h>

int main(){
    printf("apple이 저장된 시작주소 값: %u\n", "apple");
    printf("두 번째 문자 주소값: %u\n", "apple"+1);
    printf("첫 번째 문자: %c\n", *("apple"));
    printf("두 번째 문자: %c\n", *("apple"+1));
    printf("배열로 표현한 세 번째 문자: %c\n", "apple"[2]);
}