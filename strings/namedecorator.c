#include <stdio.h>
#include <string.h>

int main(void){
    char fname[30] = "sofia";
    char capSix[40] = "<<<";
    strcat(fname, ">>>");
    strcat(capSix, fname);
    printf("hello %s \n", capSix);
    return 0;
}