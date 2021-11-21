#include <stdio.h>
/* Programa: PrecioDeProductos.c */
/*
Análisis del problema: 
Entrada: Se almacenan 10(diez) productos.
Proceso: Se acumula la cantidad de productos con un costo mayor a 50.
Salida: Se imprime el porcentaje de los costos mayores a 50.
*/

int main(){

    float producto[10];
    float luisEspinosa;//variable donde se guardara el calculo para sacar el porcentaje
    int i;//contador
    int mayor50 = 0;// esta variable se utilizara para contar los productos superiores a 50


    printf("\n* Precio de los Productos *\n");
    printf("\n-Programa hecho por: Luis Espinosa / 8-992-2338\n-Salon: ISF-111\n");
    printf("\n-A continuacion agregue el precio de los productos: \n");

    for (i = 0; i <= 9; i++)
    {
        printf("Producto N°%i: ", i+1);
        scanf("%f", &producto[i]);
    }

    for (i = 0; i <= 9; i++)
    {
        if (producto[i] > 50)
        {
            mayor50++;//se almacenan los productos mayores a 50
        }
    }
    luisEspinosa = ((float)mayor50 / 10) * 100;//formula aritmetica para sacar el porcentaje
    
    printf("\n* Porcentaje de los productos mayores a 50$ *\n");
    printf("\n-El porcentaje fue de: %.2f%%\n", luisEspinosa);    

    return 0;
}
