#include <stdio.h>

// 재귀함수: 자기자신을 호출하는 함수 

// 1. 무한 호출되는 재귀함수 
void fruit(void);

void fruit(void){
    printf("apple");
    fruit();  // 재귀함수 
}

int main(){
    fruit();
}