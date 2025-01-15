/*
  크기가 큰 배열의 경우 매개벼누로 사용하게 되면 
  C언어는 Call-by-value로 배열을 복사해서 매개변수로 전달(비효율적)
  매개변수에 포인터변수를 사용하게 되면 배열을 복사하지 않고 전달(효율적)
  ※ 배열의 변수명은 배열의 시작주소와 동일! 
*/

#include <stdio.h>
void arrSum(int *pArr);

void arrSum(int *pArr){
    for(int i = 0; i<9999; i++){
        printf("%d번지: %d", i, pArr[i]);
    }
}
int main(){
    int arrNum[9999] = {0};
    arrSum(arrNum);
}