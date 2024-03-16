#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inputDays = 0;
    int startingDay = 0;
    int i;
    int days = 0;
    int daysFake = 0;

    //Eingabemaske
    printf("number of days in month: ");
    scanf("%d", &inputDays);

    printf("starting day of week (1=Monday, 7=Sunday): ");
    scanf("%d", &startingDay);
    printf("\n");

    //For Schleife für Anzahl der Tage
    for(i = 0; i < inputDays; i++){

        while(startingDay > 1){
            printf("   ");
            startingDay--;
            daysFake++;
        }

        printf("%2d ", ++days);
        daysFake++;

        if(daysFake%7==0){
            printf("\n");
        }
    }
    return 0;
}
