#include <stdio.h>

void name(char name[]){
    printf("hello %s\n", name);
}

int main(void){
    name("Sophia!");
    name("lindsey!");
    name("keisha!");
    name("hazel!");
    name("sam!");
    return 0;
}