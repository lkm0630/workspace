#include <stdio.h>

int main(){
    int a, b;
    int sum, sub, mul, inv;

    a = 10;
    b = 20;
    sum = a+b;  // 더하기 연산(+)
    sub = a-b;  // 빼기 연산(-)
    mul = a*b;  // 곱하기 연산(*)
    inv = -a;   // 음수 연산(-)

    // 2^2 or 2**2 (제곱) 
    double apple;
    int banana;
    int orange;
    apple = 5.0 / 2.0;  // 2.5
    banana = 5 / 2;     // 몫(2)
    orange = 5 % 2;     // 나머지(1)

    printf("%.1lf\n", apple);
    printf("%d\n", banana);
    printf("%d\n", orange);

    // 복합대입연산자
    // -=, *=, +=, /=, %=
    // a = a + 20; → a += 20;
    // a = a * 20; → a *= 20;

}