/*
  배열과 포인터 
    - 배열을 어떻게 포인터로 사용할 수 있을까? 
    - 포인터 배열 → 포인터를 배열로 만들어서 사용! 

  포인터 연산 
    - 포인터는 덧셈과 뺄셈만 가능
    - 포인터변수+1은 자료형을 가르키는 포인터에 따라 다르게 연산됨 
    - 일반적으로 포인터의 덧셈과 뺄셈은 포인터가 가르키는 자료형만큼 증가하거나 감소 
    ex) pa(101번지) 
        char형    pa+1(sizeod(char))   → 102번지
        int형     pa+1(sizeof(int))    → 105번지
        double형  pa+1(sizeof(double)) → 109번지

  배열 → 변수를 여러개 붙여서 선언과 동일! 
  배열이름 = 배열의 시작 주소 
  int arrNum[3] = {7, 8, 9};
  arrNum = 시작주소(101번지)
  배열 인덱스:     [0]         [1]          [2]
  메모리:     [101~104번지][105~108번지][109~112번지]
  실제 값:         7           8            9       
  
    - *(arrNum + 0) == arrNum[0]
    - *(arrNum + 1) == arrNum[1]
    - *(arrNum + 2) == arrNum[2]

    일반변수 int num = 4;
    배열변수 int arrNum[3] = {1, 2, 3};
    포인터변수 int *pa;
    pa = &num; 
    pa = arrNum;  // 배열은 변수명이 주소이기 때문에 &사용하지 않음! 

  배열요소(아이템) 접근 방법 
    int *pa;  // 101번지
    1. 정수연산 pa+1  101+1(int:4byte) → 105번지(2번째 요소)
    2. 간접참조연산 *(pa+1)            → 105번지 간접참조(2번째 요소)
    3. 배열요소 표현식 pa[1]           → 배열[1] 인덱스(2번째 요소) 
*/

#include <stdio.h>

int main(){
    int arrNum[3];  // 4 Byte 크기의 int형 변수를 3개 생성해서 연결 

    *(arrNum + 0) = 11;
    *(arrNum + 1) = *(arrNum + 0) + 10;
    printf("세번째 배열 요소: ");
    scanf("%d", arrNum + 2);

    for(int i = 0; i < 3; i++){
        printf("%d\n", *(arrNum + i));
    }
}