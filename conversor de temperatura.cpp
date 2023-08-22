#include <stdio.h>
#include <stdlib.h>  // Necesario para la funci�n system()

int main()
{
    system("color 0C4");
    double temperature;
    int choice;
    char repeat;

    const double celsiusToFahrenheitFactor = 9.0 / 5.0;
    const double fahrenheitToCelsiusFactor = 5.0 / 9.0;
    const double fahrenheitToCelsiusOffset = 32.0;

    do
    {
        printf("Seleccione la conversi�n:\n1. Celsius a Fahrenheit\n2. Fahrenheit a Celsius\n");
        scanf("%d", &choice);

        printf("Ingrese la temperatura: ");
        scanf("%lf", &temperature);

        if (choice == 1)
            printf("Temperatura en Fahrenheit: %.2lf �F\n", temperature * celsiusToFahrenheitFactor + fahrenheitToCelsiusOffset);
        else if (choice == 2)
            printf("Temperatura en Celsius: %.2lf �C\n", (temperature - fahrenheitToCelsiusOffset) * fahrenheitToCelsiusFactor);
        else
            printf("Opci�n no v�lida\n");

        printf("�Desea realizar otra conversi�n? (s/n): ");
        scanf(" %c", &repeat);
    } while (repeat == 's' || repeat == 'S');

    return 0;
}



