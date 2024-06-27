#include <stdio.h>
#include <conio.h>

void displayMenu(int opc) {
    printf("CALCULAR AREA DE FIGURAS\n");
    printf("%s 1) Triangulo\n", opc == 1 ? "->" : "  ");
    printf("%s 2) Trapecio\n", opc == 2 ? "->" : "  ");
    printf("%s 3) Rectangulo\n", opc == 3 ? "->" : "  ");
}
void clearScreen(){
    system("cls");
}

int main() {
    int opc = 1;
    int ch;

    do {
        clearScreen();
        displayMenu(opc);

        ch = getch();
        if (ch == 0 || ch == 224) {
            ch = getch();
            switch (ch) {
                case 72: 
                    opc = (opc == 1) ? 3 : opc - 1;
                    break;
                case 80: 
                    opc = (opc == 3) ? 1 : opc + 1;
                    break;
            }
        }
    } while (ch != 13);  
    clearScreen();
    switch (opc) {
        case 1: {
            int area, base, altura;
            printf("Dime la base del triangulo: ");
            scanf("%d", &base);
            printf("Dime la altura del triangulo: ");
            scanf("%d", &altura);
            area = base * altura / 2;
            printf("El area del triángulo es: %d\n", area);
            break;
        }
        case 2: {
            int baseMayor, baseMenor, altura, area;
            printf("Dime la base mayor del trapecio: ");
            scanf("%d", &baseMayor);
            printf("Dime la base menor del trapecio: ");
            scanf("%d", &baseMenor);
            printf("Dime la altura del trapecio: ");
            scanf("%d", &altura);
            area = (baseMayor + baseMenor) * altura / 2;
            printf("El area del trapecio es: %d\n", area);
            break;
        }
        case 3: {
            int base, altura, area;
            printf("Dime la base del rectangulo: ");
            scanf("%d", &base);
            printf("Dime la altura del rectangulo: ");
            scanf("%d", &altura);
            area = base * altura;
            printf("El area del rectangulo es: %d\n", area);
            break;
        }
        default:
            printf("Opción no válida\n");
    }
    printf("Presiona cualquier tecla para salir...");
    getch();
    return 0;
}
