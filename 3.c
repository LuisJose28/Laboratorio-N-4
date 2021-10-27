#include <stdio.h>

float CambioMoneda(int valorUno, float valorDos)
{
        float resultado;
        switch(valorUno)
        {
                case 1:
                        printf("\n-Conversion de BOLIVAR VENEZOLANO a DOLARES: ");
                        resultado = valorDos / 32738.48;
                        break;
                case 2: 
                        printf("\n-Conversion de DOLAR CANADIENSE a DOLARES AMERICANOS: ");
                        resultado = valorDos / 1.35;
                        break;

                case 3: 
                        printf("\n-Conversion de lIBRA a DOLARES: ");
                        resultado = valorDos / 0.78;
                        break;

                case 4: 
                        printf("\n-Conversion de PESO COLOMBIANO a DOLARES: ");
                        resultado = valorDos / 3777.51;
                        break;

                case 5: 
                        printf("\n-Conversion de PESO MEXICANO a DOLARES: ");
                        resultado = valorDos / 21.98;
                        break;
                
                case 6: 
                        printf("\n-Conversion de YEN a DOLARES: ");
                        resultado = valorDos / 107.30;
                        break;

                case 7: 
                        printf("\n-Conversion de YUAN a DOLARES: ");
                        resultado = valorDos / 7.07;
                        break;

                case 8: 
                        printf("\n-Conversion de EURO a DOLARES: ");
                        resultado = valorDos / 0.88;
                        break;

                case 9: 
                        printf("\n-Conversion de REAL BRASILEÑO a DOLARES: ");
                        resultado = valorDos / 5.06;
                        break;

                case 10: 
                        printf("\n-Conversion de PESO ARGENTINO a DOLARES: ");
                        resultado = valorDos / 69.31;
                        break;
                
                default:
                printf("\n-No ha digitado una moneda correcta, Vuelva a intentarlo.\n");  

        }
        return resultado; // esta variable retorna el resultado a la funcion principal 

}

int main()
{
    //bloque declarativa de variables
    int moneda; //tipo de moned a a cambiar 
    int contador; //esta variable servira para terminar o repetir el programa
    float cantidad; //cantidad de moneda que se desea cambiar a dolar 
  
    //Bloque de Instrucciones
    printf("\n- Bienvenidos al Conversor de Divisas -\n");

    do
    {
        printf("\n-Digite la moneda que desea convertir: ");
        scanf("%i", &moneda);
        printf("\n-Digite la cantidad que desea convertir a Dolares: ");
        scanf("%f", &cantidad);

        printf("\n-La conversion a Dolares es igual a: %.2f$\n", CambioMoneda(moneda, cantidad));

        printf("\n¿Desea realizar otro cambio de moneda?\n");
        printf("Presione 1 para SI\nPresione 2 para NO\nOpcion:");        
        scanf("%i", &contador); //esta variable servira para terminar o repetir el programa


    } while (contador != 0);
    printf("\n-Hasta Luego\n");

    
return 0;
}
