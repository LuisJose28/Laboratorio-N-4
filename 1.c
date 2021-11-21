#include <stdio.h>

/* Programa: CalculoSalarioNeto.c */
/*
Análisis del problema: 
Entrada: Salario bruto del usuario.
Proceso: Calcular sus prestaciones laborales dependiendo de su salario bruto.
Salida: Salario Neto.
*/

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
    float salarioNeto; // salario que recibira el usuario
    int luisEspinosa; // esta variable servira para terminar o repetir el programa
    

    //Bloque de Instrucciones
    
    printf("\n- Bienvenidos a la empresa AnkerField -\n");
    printf("\n-Programa hecho por: Luis Espinosa / 8-992-2338\n-Salon: ISF-111\n");


    printf("\n-Calcule su Salario Neto -\n");

    do
    {
        printf("\n-A continuacion ingrese su Salario Bruto: ");
        scanf("%f" , &salarioBruto);

        printf("-Su descuento por prestaciones laborales sera de: %.2f$ ", PrestacionesLaborales(salarioBruto));
        
        salarioNeto = salarioBruto - PrestacionesLaborales (salarioBruto); //Se calcula el salario Neto
        printf("\n-Su salario Neto será de %.2f$", salarioNeto);

        printf("\n\n-¿Desea realizar otro calculo?. Presione 1 para Si o 0 para No : ");
        scanf("%i", &luisEspinosa); //esta linea servira para terminar o repetir el programa. 0 para no. 1 para Si

    } while (luisEspinosa != 0);
    printf("-Hasta Luego\n");

return 0;
}
