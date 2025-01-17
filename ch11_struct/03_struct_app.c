#include <stdio.h>

struct student{
    int id;
    char name[20];
    double grade;
};

int main(){
    int num1 = 10, num2 = 20, num3 = 30;
    struct student s1 = {315, "홍길동", 2.4},
                   s2 = {316, "이순신", 3.7},   
                   s3 = {317, "세종대왕", 4.4};  
    struct student max;
    max = s1;                
    if(s2.grade > max.grade){
        max = s2;
    } 
    if(s3.grade > max.grade){
        max = s3;
    }
    printf("학번(%d), 이름(%s), 학점(%.1lf)", max.id, max.name, max.grade);
}