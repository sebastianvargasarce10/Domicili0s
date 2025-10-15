#include <stdio.h>
#include <stdlib.h>

int main() {
    int opcion, seguir = 1;
    int pedidos = 0;
    float total = 0;

    do {
        printf("\n==== MENU DE DOMICILIOS ====\n");
        printf("1. Hacer pedido\n");
        printf("2. Ver total de pedidos\n");
        printf("3. Cancelar un pedido\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1: {
                int producto;
                printf("\n--- MENU DE PRODUCTOS ---\n");
                printf("1. Hamburguesa ($15000)\n");
                printf("2. Perro caliente ($10000)\n");
                printf("3. Pizza ($20000)\n");
                printf("Seleccione un producto: ");
                scanf("%d", &producto);

                if (producto == 1) {
                    printf("Has pedido una Hamburguesa.\n");
                    total += 15000;
                    pedidos++;
                } else if (producto == 2) {
                    printf("Has pedido un Perro caliente.\n");
                    total += 10000;
                    pedidos++;
                } else if (producto == 3) {
                    printf("Has pedido una Pizza.\n");
                    total += 20000;
                    pedidos++;
                } else {
                    printf("Producto no valido.\n");
                }
                break;
            }
            case 2:
                printf("\nTienes %d pedidos realizados.\n", pedidos);
                printf("Total acumulado: $%.2f\n", total);
                break;
            case 3:
                if (pedidos > 0) {
                    printf("\nPedido cancelado.\n");
                    pedidos--;
                    total -= 10000; // valor aproximado
                } else {
                    printf("\nNo hay pedidos para cancelar.\n");
                }
                break;
            case 4:
                printf("\nGracias por usar el sistema de domicilios. ¡Hasta pronto!\n");
                seguir = 0;
                break;
            default:
                printf("\nOpcion no valida. Intente nuevamente.\n");
        }

    } while (seguir == 1);

    return 0;
}
