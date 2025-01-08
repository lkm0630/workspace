#include <stdio.h>

/*
  Switch~case~default문
    - 여러개의 상수 중 조건에 맞는 상수를 선택해서 실행

    - 규칙
      1. 조건식은 정수식만 사용
      2. 기본적으로 case는 break문과 함께 사용(강제는 아님)
      3. break가 없는 경우 break 만나기 전까지 모든 case 실행
      4. default는 조건에 해당하는 case가 없는 경우 실행
      5. default는 생략 가능(if문의 else와 비슷)
      6. default는 어디든 위치해도 상관없음, 대부분 맨 하단에 작성
      7. if문보다 switch문의 실행속도가 더 빠름 
*/
int main(){
    int rank = 2, m = 0;

    switch(rank){
        case 1:
            m = 100;
            break;
        case 2:
            m = 200;
            break;
        case 3:
            m = 300;
            break;
        default:  // 조건에 만족하는 case가 없는 경우 실행 
            m = 999;
            break;
    }
}