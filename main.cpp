//#include <iostream>
#include <stdio.h>
#include "Stack.h"
#include "queue.h"

void menu(void)
{
    printf("\n");
    printf("1 - dodaj do kolejki (write)\n");
    printf("2 - odczytaj wartosc z kolejki (first)\n");
    printf("3 - odczytaj wartosc z kolejki i usun (read)\n");
    printf("4 - sprawdz czy kolejka jest pusta\n");
    printf("5 - sprawdz czy kolejka jest pelna\n");
    printf("6 - koniec programu\n");
    printf("\n");
}

int main()
{
    int temp = 0;
    int option = 0;
    printf("Kolejka - implementacja w tablicy statycznej\n");
    while (1)
    {
        menu();
        scanf("%d", &option);


        switch (option)
        {
            case 1:
                if ( !isQueueFull() ){
                    printf("Podaj wartosc: ");
                    scanf("%d", &temp);
                    write(temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pelna!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = first();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pustaq!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = read();
                    printf("Odczytana wartosc: %d", temp);
                }
                else {
                    printf("operacja niedozwolona Kolejka pusta!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Koleka jest pusta.\n");
                }
                else {
                    printf("Kolejka nie jest pusta.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Kolejka jest pelna.\n");
                }
                else {
                    printf("Kolejka nie jest pelna.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                return 0;

            default:
                printf("Wybierz wlasciwa opcje.\n\n");
                break;
        }
    }

    return 0;
}