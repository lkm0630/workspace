/*
  배열명과 포인터의 차이 
    - 배열명 → 시작주소(상수)
    1. sizeof() 연산결과가 다름
      - 배열명은 배열의 전체 크기를 구함
      - 포인터는 포인터 하나의 크기를 구함(4 Byte)
       ※ 포인터와 주소는 자료형에 상관없이 고정된 크기를 가짐 
    2. 변수와 상수의 차이 
      - 포인터는 변수: 값 변경 가능
      - 배열명(주소): 상수로 값 변경 불가 
      ex) int *pa;
      pa = pa + 1;  (O)
      pa++          (O)

      int ary[3];
      ary = ary+1;  (X)
      ary++         (X) 
*/

#include <stdio.h>

int main(){
    int ary[3] = {10, 20, 30};
    int *pa = ary;

    printf("배열값: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", pa[i]);
    }
    printf("\n");
    printf("배열값: ");
    for(int i = 0; i < 3; i++){
        printf("%d ", *pa);
        pa++;
    }
}