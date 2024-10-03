#include <stdio.h>

int age;

int main (void){
    printf("how old are you?\n");
    scanf("%d", &age);
    if (age >= 18){
        printf("you are old enough to vote!\n");
    }else if (age <= 18){
        printf("you are not old enought to vote\n");
    }if (age >= 16){
        printf("you are old enoughto drive!\n");
    }else if (age <= 16){
        printf("you are not old enough to drive\n");
    }if (age >= 16){
        printf("your are able to get your learners permit");
    }else if (age <= 16){
        printf("you are  not old enough to have your learners permit\n");
    }if (age >= 5){
        printf("you are old enough to go to school\n");
    }else if (age <= 5){
        printf("you are not old enough to go to school!\n");
    }
    return 0;
}