#include <stdio.h>

// 별 찍기


int main(){

//  *
//  **
//  ***
//  ****
//  *****    

    for(int i = 1; i < 6; i++){  // 5번 반복 
        for(int j = 1; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("####################################\n");
    // *****
    // ****
    // ***
    // **
    // *

    for(int i = 5; i >= 1; i--){  // 5번 반복 
        for(int j = 1; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}