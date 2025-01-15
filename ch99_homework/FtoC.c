/*
  C 프로그래밍 언어를 사용해서 다음 조건에 맞는 코드를 작성하고 제출하세요.

  - 프로그램: 화씨온도를 섭씨 온도로 변환하는 프로그램

  - 조건:

    1. 사용자에게 임의의 화씨 온도 값을 입력 받는다. (변수명은 fVal 사용할 것) ex) 17.0

    2. 화씨 온도를 매개변수로 입력받고, 화씨 온도를 섭씨온도로 바꾸고, 변경 된 섭씨 온도를 return값으로 전달하는 함수를 정의한다. (함수명은 FtoC, 섭씨온도 변수명은 cVal 사용할 것)

    3. printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal); 을 사용해서 출력한다.

  - 화씨온도를 섭씨온도로 변환하는 수식: (5.0 x (화씨온도-32.0)) / 9.0
  - 제출은 vscode에서 개발한 코드를 복사해서 붙여넣어주세요.(파일로 제출하지 마세요!)
*/

#include <stdio.h>
double FtoC(double f);

double FtoC(double f){
    double c = (5.0 * (f-32.0)) / 9.0;

    return c;
}

int main(){
    double fVal;

    printf("화씨온도: ");
    scanf("%lf", &fVal);

    double cVal = FtoC(fVal);

    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);
}