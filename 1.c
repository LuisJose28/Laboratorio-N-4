#include <stdio.h>

/* Programa: CalculoSalarioNeto.c */
/* Luis Espinosa / 8-992-2338 */
float PrestacionesLaborales(float parametro) //funcion que calcula la prestacion laboral dependiendo del salario bruto
{
        float total;
        if(parametro <= 1000)
        {
            total = parametro * 0.11;
        }
        else if(parametro > 1000)
        {
            total = parametro * 0.1225;
        }
        return total; // retorna el resultado a la funcion principal 
}

int main()
{

    //bloque declarativa de variables
    float salarioBruto; //Salario total sin ningun descuento
    float salarioNeto; 
    int contador; // esta variable servira para terminar o repetir el programa
    

    //Bloque de Instrucciones
    printf("\n- Bienvenidos a la empresa AnkerField -\n");
    printf("\n- Calcule su Salario Neto -\n");
    printf("Si desea terminar, al final presione 0.\n");

    do
    {
        printf("\n-A continuacion ingrese su Salario Bruto: ");
        scanf("%f" , &salarioBruto);

        printf("-Su descuento por prestaciones laborales sera de: %.2f$ ", PrestacionesLaborales(salarioBruto));
        
        salarioNeto = salarioBruto - PrestacionesLaborales (salarioBruto);
        printf("\n-Su salario Neto será de %.2f$", salarioNeto);

        printf("\n\n-¿Desea realizar otro calculo?. Si desea terminar, presione 0: ");
        scanf("%i", &contador); //esta variable servira para terminar o repetir el programa

    } while (contador != 0);
    printf("\n-Hasta Luego\n");

return 0;
}
