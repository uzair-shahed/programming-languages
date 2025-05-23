#include <stdio.h>
#include <windows.h>

int main() {
    for (int i = 0; i < 10; i++){
        Sleep(1000);
        printf("%d\n", i);
    }
    for (int i = 0; i < 10; i+=2){
        printf("%d\n", i);
    }
    for (int i = 0; i < 10; i+=3){
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i--){
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i-=2){
        printf("%d\n", i);
    }

    return 0;
}