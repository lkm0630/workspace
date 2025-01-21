#include <stdio.h>
// 기본적으로 함수 사용 방법(3단계)
//  1. 함수 정의
//  2. 함수 호출
//  3. 함수 선언 

// ※ 함수 정의가 main() 위에 있으면 "함수 선언" 생략 가능 

int r1(){
	return 4;
}
int r10(){
	return (30+r1());
}
int r100(){
	return (200+r10());
}
int main(){ 
	printf("%d\n", r100());  // 234
    return 0;
}