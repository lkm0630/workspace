#include <stdio.h> 

int len(char* p); 

int main() { 
    char* p1 = "2022"; 
    char* p2 = "202207";   

    printf("%d", len(p1) + len(p2));   // 4+6 = 10
} 

int len(char*p) { 
    int r = 0;      
    while(*p != '\0'){ 
        p++; 
        r++;
    } 
    return r;
}