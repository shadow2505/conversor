#include <stdio.h>

int main() {
    double temperature;
    int choice;

    const double celsiusToFahrenheitFactor = 9.0 / 5.0;
    const double fahrenheitToCelsiusFactor = 5.0 / 9.0;
    const double fahrenheitToCelsiusOffset = 32.0;

    printf("Seleccione la conversión:\n1. Celsius a Fahrenheit\n2. Fahrenheit a Celsius\n");
    scanf("%d", &choice);

    printf("Ingrese la temperatura: ");
    scanf("%lf", &temperature);

    if (choice == 1)
        printf("Temperatura en Fahrenheit: %.2lf °F\n", temperature * celsiusToFahrenheitFactor + fahrenheitToCelsiusOffset);
    else if (choice == 2)
        printf("Temperatura en Celsius: %.2lf °C\n", (temperature - fahrenheitToCelsiusOffset) * fahrenheitToCelsiusFactor);
    else
        printf("Opción no válida\n");

    return 0;
}

