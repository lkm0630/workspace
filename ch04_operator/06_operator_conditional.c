#include <stdio.h>

/*
  삼항 연산자(Conditional Operator)
    - 3개의 항을 사용하는 연산자
    - (조건) ? 값1 : 값2
       ㄴ 조건이 True면 값1 선택
       ㄴ 조건이 False면 값2 선택 
*/

int main(){
    int a = 10, b = 20, res;

    res = (a > b) ? a : b;
    printf("큰 값: %d\n", res);
}