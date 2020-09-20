#include <stdio.h>


void capturar_enteros(){
    int enteros[5];
    int i=0;
    float promedio;
    int suma=0;
    printf("Digite los numeros: \n");
    for(i=0; i<5; i++){
        scanf("%i", &enteros[i]);
        suma+=enteros[i];
    }
    for(i=0; i<5; i++){
        printf("%i\n", enteros[i]);
    }
    promedio=suma/5;
    printf("Suma: %i\n", suma);
    printf("Promedio: %f\n", promedio);
   
}

int main()
{
    int op;
    do{
        printf("1) Capturar enteros\n");
        printf("2) Mostrar cadena n veces\n");
        printf("3) Agregar personajes\n");
        printf("0) Salir\n");
        printf("Que opcion quieres elegir?: ");
        scanf("%i", &op);
        switch (op)
        {
        case 1:
            capturar_enteros();
            break;
        case 2:

            break;
        case 3:
            break;
        default:
            break;
        }
    }while (op != 0);

}
//{}   \     []