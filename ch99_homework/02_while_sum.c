#include <stdio.h>

//  문제: while문을 사용해서 1~100까지의 값을 사용해서 홀수합, 짝수합을 계산하세요. 

int main(){
    int oddNum = 0;
    int evenNum = 0;
    
    int i = 1;
    while(i < 101){
        if(i%2 == 0){
            oddNum += i;
        } else{
            evenNum += i;
        }
        i++;
    }
    
    printf("홀수합: %d, 짝수합: %d\n", oddNum, evenNum);

}