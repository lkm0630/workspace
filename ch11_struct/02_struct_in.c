#include <stdio.h>

struct profile{
    int age;
    double height;
};

struct student{
    struct profile pf;
    int id;
    double grade;
};
// → student 구조체 내에 멤버 변수로 profile 구조체 선언 

int main(){
    struct student s1;

    s1.pf.age = 37;
    s1.pf.height = 183.2;
    s1.id = 99;
    s1.grade = 4.2;

    printf("나이: %d\n", s1.pf.age);
    printf("신장: %.1lf\n", s1.pf.height);
    printf("학번: %d\n", s1.id);
    printf("학점: %.lf\n", s1.grade);
}