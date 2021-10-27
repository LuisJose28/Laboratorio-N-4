#include <stdio.h>

/* Programa: Calculadora.c */
/* Luis Espinosa / 8-992-2338 */

int Suma(int numeroUno, int numeroDos)
{
    int total; 
    total = numeroUno + numeroDos;
    return total; // esta variable devolvera el resultado de la suma a la funcion principal
}

int Resta(int numeroUno, int numeroDos)
{
    int total; 
    total = numeroUno - numeroDos;
    return total; // esta variable devolvera el resultado de la resta a la funcion principal
}
int Multiplicacion(int numeroUno, int numeroDos)
{
    int total; 
    total = numeroUno * numeroDos;
    return total; // esta variable devolvera el resultado de la multiplicacion a la funcion principal
}
int Division(int numeroUno, int numeroDos)
{
    int total; 
    total = numeroUno / numeroDos;
    return total; // esta variable devolvera el resultado de la division a la funcion principal
}

int main()
{
    //bloque declarativa de variables
    int valorUno, valorDos; // el usuario ingresara 2 valores que desee
    int resultado; //esta variable sera el resultado de la operacion seleccionada
    int operacion; // esta variable decidira que operacion matematica realizará e inicializara la condicion switch-case
    int contador; //esta variable servira para terminar o repetir el programa
    

    //Bloque de Instrucciones
    printf("\n- Calculadora AnkerField -\n");
    
    do
    {
        printf("\n-Ingrese el primer valor numerico: ");
        scanf("%i", &valorUno);

        printf("-Ingrese el segundo valor numerico: ");
        scanf("%i", &valorDos);

        printf("-Operaciones Matematicas disponibles: \n");
        printf("\n-Ingrese 1 para Suma. \n-Ingrese 2 para resta. \n-Ingrese 3 para Multiplicacion. \n-Ingrese 4 para Division. \n");
        printf("\n-Operacion a realizar: ");
        scanf("%i", &operacion);


        switch (operacion) //usaremos esta condicional multiple para escoger la operacion a realizar
        {
        case 1:
            printf("\n-Usted ha seleccionado la Suma: \n");
            resultado = printf("%i + %i = %i", valorUno, valorDos, Suma(valorUno, valorDos));
            break;
        
        case 2: 
            printf("\n-Usted ha seleccionado la Resta: \n");
            resultado = printf("%i - %i = %i", valorUno, valorDos, Resta(valorUno, valorDos));
            break;
        
        case 3: 
            printf("\n-Usted ha seleccionado la Multiplicacion: \n");
            resultado = printf("%i * %i = %i", valorUno, valorDos, Multiplicacion(valorUno, valorDos));
            break;
        
        case 4: 
            printf("\n-Usted ha seleccionado la Division: \n");
            resultado = printf("%i / %i = %i", valorUno, valorDos, Division(valorUno, valorDos));
            break;
        
        default:
            printf("-No ha digitado un numero correcto, por favor vuelva a intentarlo");
            break;
        }
        
        printf("\n\n-¿Desea realizar otro calculo?. Si desea terminar, presione 0: ");
        scanf("%i", &contador); //esta variable servira para terminar o repetir el programa

    } while (contador != 0);
    printf("Hasta Luego\n");

return 0;
}
