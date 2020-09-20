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

 void mostrar(int n,char cadena[]){
     for (size_t i = 0; i < n; i++)
     {
         printf("%s", cadena);
     }
     

}

int main()
{
    int op;
    char cadena[20];
    int n;
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
            printf("Escribe una cadena de hasta 20 caracteres: ");
            fflush(stdin);
            fgets(cadena,sizeof(cadena),stdin);
            printf("Cuantas veces deseas visualizarlo?: ");
            scanf("%i",&n);
            mostrar(n,cadena);
            break;
        case 3:
            break;
        default:
            break;
        }
    }while (op != 0);

}
//{}   \     []