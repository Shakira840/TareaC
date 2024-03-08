#include <stdio.h>

#define TC_DOLAR_GTQ 7.75
#define TC_EURO_GTQ 8.50
#define TC_EURO_USD 1.10

int main (){
    int opcion;
    float cantidad;

    printf("BIenvenido al conversor de moneda\n");
    printf("1. Convertir de dólares a quetzales\n");
    printf("2. Convertir de quetzales a dólares\n");
    printf("3. Convertir de euros a quetzales\n");
    printf("4. Convertir de quetzales a euros\n");
    printf("5. Convertir de euros a dólares\n");
    printf("6. Convertir de dólares a euros\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opcion);

//Opciones
    switch(opcion){
        case 1:
        printf("Ingrese la cantidad de dolares: ");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f GTQ\n", cantidad, cantidad * TC_DOLAR_GTQ);
        break;
        case 2:
        printf("Ingrese la cantidad en quetzales: ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f USD\n", cantidad, cantidad / TC_DOLAR_GTQ);
        break;
        case 3:
        printf("Ingrese la cantidad de euros ");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %.2f GTQ\n", cantidad, cantidad * TC_EURO_GTQ);
        break;
        case 4:
        printf("Ingrese la cantidad en quetzales: ");
        scanf("%f", &cantidad);
        printf("%.2f GTQ equivale a %.2f EUR\n", cantidad, cantidad / TC_EURO_GTQ);
        break;
        case 5:
        printf("Ingrese la cantidad de euros ");
        scanf("%f", &cantidad);
        printf("%.2f EUR equivale a %.2f USD\n", cantidad, cantidad * TC_EURO_USD);
        break;
        case 6:
        printf("Ingrese la cantidad en dolares: ");
        scanf("%f", &cantidad);
        printf("%.2f USD equivale a %.2f EUR\n", cantidad, cantidad / TC_EURO_USD);
        break;

        default:
        printf("Opcion no valida\n");
    }

    return 0;
}