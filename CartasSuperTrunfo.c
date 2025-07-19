#include <stdio.h>

// First card
char state[100], code_card[4], city_name[100];
int population, number_of_tourist_attractions;
float area, pib;
// Second card
char state_2[100], code_card_2[4], city_name_2[100];
int population_2, number_of_tourist_attractions_2;
float area_2, pib_2;

int main() {
    printf("Let's create the first card of the game Super Trunfo!\n");
    printf("Follow the instructions below.\n");
    printf("Type the state: ");
    scanf("%s", state);
    printf("\nType the code of the card. The code must be 3 characters long: ");
    scanf("%s", code_card);
    printf("\nType the name of the city: ");
    scanf("%s", city_name);
    printf("\nType the population of the city: ");
    scanf("%d", &population);
    printf("\nType the number of tourist attractions: ");
    scanf("%d", &number_of_tourist_attractions);
    printf("Type the area of the city: ");
    scanf("%f", &area);
    printf("Type the PIB of the city: ");
    scanf("%f", &pib);

    printf("\n\nNow, let's create the second card of the game Super Trunfo.\n");
    printf("Type the state: ");
    scanf("%s", state_2);
    printf("\nType the code of the card. Remember that it must be 3 characters long: ");
    scanf("%s", code_card_2);
    printf("\nType the name of the city: ");
    scanf("%s", city_name_2);
    printf("\nType the population of the city: ");
    scanf("%d", &population_2);
    printf("\nType the number of tourist attractions: ");
    scanf("%d", &number_of_tourist_attractions_2);
    printf("Type the area of the city: ");
    scanf("%f", &area_2);
    printf("Type the PIB of the city: ");
    scanf("%f", &pib_2);

    printf("\nCard 1:\n");
    printf("State: %s\n", state);
    printf("Code: %s\n", code_card);
    printf("City: %s\n", city_name);
    printf("Population: %d\n", population);
    printf("Tourist Attractions: %d\n", number_of_tourist_attractions);
    printf("Area: %.3f\n", area);
    printf("PIB: %.2f\n", pib);

    printf("\n\nCard 2:\n");
    printf("State: %s\n", state_2);
    printf("Code: %s\n", code_card_2);
    printf("City: %s\n", city_name_2);
    printf("Population: %d\n", population_2);
    printf("Tourist Attractions: %d\n", number_of_tourist_attractions_2);
    printf("Area: %.3f\n", area_2);
    printf("PIB: %.2f\n", pib_2);

    return 0;
}