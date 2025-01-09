#include <stdio.h>

// do~while은 while을 변형한 반복문
//  - 반복 전에 무조건 1회 실행해야 하는 경우 사용 

int main(){
    int a = 1;
    do {
        a = a * 2;
    } while(a < 10);
}