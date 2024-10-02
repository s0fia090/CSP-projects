#include <stdio.h>

int num = 4;

int main(void){
    if (num < 10){
        printf("this is a single digit number\n");
    }else if(num < 100){
        printf("this is a double digit number\n");
    }else{
        printf("this is at least a triple digit number\n");
    }
    return 0;
}