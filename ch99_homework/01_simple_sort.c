#include <stdio.h>

// 3개의 수를 입력받고, 큰 숫자로 정렬해서 출력하는 프로그램

int main(){
    int num1 = 20, num2 = 10, num3 = 50;

    if(num1 < num2){
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if(num1 < num3){
        int temp = num1;
        num1 = num3;
        num3 = temp;
    }
    if(num2 < num3){
        int temp = num2;
        num2 = num3;
        num3 = temp;
    }

    printf("%d > %d > %d", num1, num2, num3);
}