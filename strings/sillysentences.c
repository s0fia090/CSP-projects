#include <stdio.h>
#include <string.h>

int main(void){
    char animal[20];
    char place[20];
    char verb[20];
    char sentence[400] = "the";
    printf("name an animal: \n");
    fgets(animal, sizeof(animal), stdin);
    printf("name a place: \n");
    fgets(place, sizeof(place), stdin);
    printf("name a past tense verb: \n");
    fgets(verb, sizeof(verb), stdin);
    strcat(sentence, animal);
    strcat(sentence, "went to the ");
    strcat(sentence, place);
    strcat(sentence, "and ");
    strcat(sentence, verb);
    strcat(sentence, "with his friend the angry turtle.");
    printf("%s", sentence);
    return 0;
}