#include <stdio.h>

int main(void){
    char income[9];
    char utilities[9];
    char groceries[9];
    char car[9];
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%s", income);
    printf("how much do your utilities cost?\n");
    scanf("%s", utilities);
    printf("You make %s\n", income");
    float spend[] = (float) income - (float) utilities;
    printf("%f",spend);
    return 0;
}