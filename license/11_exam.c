#include <stdio.h>

int main(){

    char *a = "qwer";
    char *b = "qwtety";
    int i, j;

    for(int i = 0; a[i] != '\0' ; i++){           // i: 0, 1, 2, 3   
        for(int j = 0; b[j] != '\0'; j++){        // j: 0, 1, 2, 3, 4, 5
            if(a[i] == b[j]) printf("%c", a[i]);  // 정답: qwe 
        }
    }
}