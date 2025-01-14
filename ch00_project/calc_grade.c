// 성적 계산기 
//  - 3과목의 성적(0~100) 입력
//  - 배열에 저장
//  - 총점과 평균 계산
//  - 출력

#include <stdio.h>

int main(){
    char name[20];  // 이름
    int score[3];   //3과목 점수(배열)
    int total = 0;  // 총합 
    double avg;     // 평균 

    // 1. 입력부 
    printf(">> 이름: ");
    scanf("%s", name);

    for(int i = 0; i < 3; i++){  // i: 0~2(배열 인덱스스)
        printf("점수: ");
        scanf("%d", &score[i]);  // 점수를 입력받아 배열에 저장 
    }

    // 2. 계산부 
    for(int i = 0; i < 3; i++){
        total += score[i];
    }
    avg = total / 3.0;

    // 3. 출력부 
    printf("%s님의 총점은 %d, 평균은 %.2lf 입니다.", name, total, avg);
}
