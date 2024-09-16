#include <stdio.h>

int main(void){
    float income, rent, utilities, groceries, transportation, savings, expenses, spend;
    float prent, putilities, pgroceries, ptransportation, psavings, pexpenses, pspend;
    printf("This is a budget calculator.\n How much do you make a month?\n");
    scanf("%f", &income);
    printf("how much do your rent cost?\n");
    scanf("%f", &rent);
    printf("how much do your utilities cost?\n");
    scanf("%f", &utilities);
    printf("how much do your groceries cost?\n");
    scanf("%f", &groceries);
    printf("how much do your transportation cost?\n");
    scanf("%f", &transportation);
    savings = income * .2;
    expenses = rent + utilities + groceries + transportation;
    spend = income - expenses - savings;
    printf("You make $%.2f\n", income);
    printf("your expenses are $%.2f\n", expenses);
    printf("your savings are $%.2f\n", savings);
    printf("your spending money is $%.2f\n", spend);
    prent = rent/income *100;
    putilities = utilities/income *100;
    pgroceries = groceries/income *100;
    ptransportation = transportation/income *100;
    psavings = savings/income *100;
    pexpenses = expenses/income *100;
    printf("your rent is %d%% of your income \n", (int) prent);
    printf("your utilities is %d%% of your income \n", (int) putilities);
    printf("your groceries is %d%% of your income \n", (int) pgroceries);
    printf("your transportation is %d%% of your income \n", (int) ptransportation);
    printf("your savings is %d%% of your income \n", (int) psavings);
    printf("your expenses is %d%% of your income \n", (int) pexpenses);
    return 0;
}