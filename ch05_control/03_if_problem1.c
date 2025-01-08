#include <stdio.h>

int main(){
    // 사용자로부터 나이를 입력받고, 20살 이상이면 주류를 판매하는 시스템

    // 1. 나이 입력받기
    int age;
    printf("나이: ");
    scanf("%d", &age);
    
    // 2. 주류 구매 여부 판단
    if(age > 20){
        printf("주류 구매가 가능합니다.");
    } else {
        printf("주류 구매가 불가능합니다.");
    }
   

}