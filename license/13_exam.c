#include <stdio.h>

// 정답: BCD

int main() {
    int n[3] = {73, 95, 82};
    int sum = 0;

    for(int i=0; i<3; i++) {
        sum += n[i];
    }

    switch(sum/30) {  // 250 / 30 = 8 
        case 10:
        case 9: printf("A");
        case 8: printf("B");    // 실행
        case 7:                 // 실행
        case 6: printf("C");    // 실행
        default:  printf("D");  // 실행 
    }                           // 정답: BCD 
}