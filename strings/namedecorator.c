#include <stdio.h>

int main(void){
    float name;
    printf("hello, what is your name?\n");
    scanf("%f", &name);
    printf("%s", &name);
    return 0;
}