#include <stdio.h>

// 정답: BCD

int main() {
    int n[3] = {73, 95, 82};
    int sum = 0;

    for(int i=0; i<3; i++) {
        sum += n[i];
    }

    switch(sum/30) {
        case 10:
        case 9: printf("A");
        case 8: printf("B");
        case 7:
        case 6: printf("C");
        default:  printf("D");
    }
}