#include <stdio.h>

/* Programa: CalculoSalarioNeto.c */
/* Luis Espinosa / 8-992-2338 */
float PRESTACIONESLABORALES(float parametro);
int main()
{

    //bloque declarativa de variables
    float salarioBruto, salarioNeto; 
    int contador; 
    

    //Bloque de Instrucciones
    printf("\n- Bienvenidos a la empresa AnkerField -\n");
    printf("\n- Calcule su Salario Neto -\n");
    printf("Si desea terminar, presione 0\n");

    do
    {
        printf("\n-A continuacion ingrese su Salario Bruto: ");
        scanf("%f" , &salarioBruto);

        printf("-Su descuento por prestaciones laborales sera de: %.2f$ ", PRESTACIONESLABORALES(salarioBruto));
        
        salarioNeto = salarioBruto - PRESTACIONESLABORALES(salarioBruto);
        printf("\n-Su salario Neto será de %.2f$", salarioNeto);

        printf("\n\n-Desea realizar otro calculo?: ");
        scanf("%i", &contador);

    } while (contador != 0);
    printf("\n-Hasta Luego\n");

return 0;
}

float PRESTACIONESLABORALES(float parametro)
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
        return total; 
}
