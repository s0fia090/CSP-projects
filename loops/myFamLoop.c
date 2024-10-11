#include <stdio.h>

char sibs[6][20] = {"santi", "julie", "viki", "mia", "cesia", "sam"};

int i;

int main (){
    while(i<6){
        printf("hello %s!\n", sibs[i]);
        i++;
    }
    return 0;
}