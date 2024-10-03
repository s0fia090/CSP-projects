#include <stdio.h>

int age;

int main (void){
    printf("how old are you?\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("you are old enough to vote!\n");
    }else{
        printf("you are not old enought to vote\n");
    }
    return 0;
}