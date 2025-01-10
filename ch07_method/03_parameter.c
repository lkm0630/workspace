/*
  Parameter(매개변수)
    - 함수의 입력값
    - 여러개 사용 가능(,구분)
    - 똑같은 이름의 매개변수는 사용 불가! 
    - 매개변수를 사용하지 않을 땐 void 사용 
*/

#include <stdio.h>
int get_num(void);

int get_num(void){
    return 5;
}

int main(){
    printf("%d", get_num());
}