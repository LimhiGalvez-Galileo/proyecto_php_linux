#include <stdio.h>

int main() {
    int opcion;
    float cantidad;

    // Tasas de cambio aproximadas
    float quetzal_dolar = 0.13;
    float quetzal_euro = 0.12;
    float dolar_quetzal = 7.80;
    float euro_quetzal = 8.50;
    float dolar_euro = 0.92;
    float euro_dolar = 1.09;

    printf("=== CONVERSOR DE MONEDAS ===\n");
    printf("1. Quetzales a Dolares\n");
    printf("2. Quetzales a Euros\n");
    printf("3. Dolares a Quetzales\n");
    printf("4. Euros a Quetzales\n");
    printf("5. Dolares a Euros\n");
    printf("6. Euros a Dolares\n");
    printf("Seleccione una opcion: ");
    scanf("%d", &opcion);

    printf("Ingrese la cantidad: ");
    scanf("%f", &cantidad);

    switch(opcion) {
        case 1:
            printf("Resultado: %.2f Dolares\n", cantidad * quetzal_dolar);
            break;
        case 2:
            printf("Resultado: %.2f Euros\n", cantidad * quetzal_euro);
            break;
        case 3:
            printf("Resultado: %.2f Quetzales\n", cantidad * dolar_quetzal);
            break;
        case 4:
            printf("Resultado: %.2f Quetzales\n", cantidad * euro_quetzal);
            break;
        case 5:
            printf("Resultado: %.2f Euros\n", cantidad * dolar_euro);
            break;
        case 6:
            printf("Resultado: %.2f Dolares\n", cantidad * euro_dolar);
            break;
        default:
            printf("Opcion no valida\n");
    }

    return 0;
}