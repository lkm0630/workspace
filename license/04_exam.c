#include <stdio.h>

// 배열 안의 숫자를 오름차순 정렬
void main(){
    int i,j;
    int temp;
    int a[5] = {75,95,85,100,50};
    
    for(i=0; i<4; i++){
        for(j=0; j<4-i; j++){
            if(a[j] > a[j+1]){
                temp=a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                }
            }
        }
        
        for(i=0; i<5; i++){
            printf("%d", a[i]);  // 답) 50, 75, 85, 95, 100
        }
}