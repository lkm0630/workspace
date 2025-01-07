#include <stdio.h>
#include <string.h>  // 문자열을 다룰 수 있는 헤더 파일

/*
  char:   문자형 ex) 'A'
  String: 문자열 ex) "ABC"
    - C언어는 문자열형 존재하지 않음 → 배열 + char형 
    - JAVA, Python, JavaScript 문자열형 존재함 → 객체(String)

  char 배열명[문자열길이+1] = 문자열; 
  ex) char abc[4] = "ABC";
    - 문자열+1 이유는 문자열 끝에 '\0'(널 문자) 자동으로 추가 
    - 배열이란 기본자료형을 여러개 묶어서 사용하는 것 
*/

int main(){
    char arr_fruit[20] = "strawberry";  // char배열 선언 및 문자열 초기화 
    printf("딸기: %s\n", arr_fruit);

    // 배열은 선언된 이후에 대입연산자로 값 입력 불가!
    //  - strcpy() 함수 사용하면 가능 → 문자열 복사(String Copy)
    // arr_fruit = "apple"; (X)
    strcpy(arr_fruit, "apple");  // (O)
    printf("%s\n", arr_fruit);
}