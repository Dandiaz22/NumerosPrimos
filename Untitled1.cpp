/* 
Date 07/03/2023
Author Daniel Alberto Diaz Balbuena
*/



/*
Incluimos la librería standard imput-output para poder meter datos y nos devuelva en pantalla ya compilado el programa.
*/
#include<stdio.h>


/* 
Función principal main, declaramos variables de tipo entero para guardar los valores.
*/
int main()
{
    int i, p, valor;


/* 
Utilizamos la funcion printf para mostrar en pantalla que se imprimiran los primeros 50 numeros primos.
*/
    printf("Los primeros 50 numeros primos son: \n");
 
 
/* 
Utilizamos un ciclo for inicializando en el valor 2, poniendo de parametro <= 50 para que no muestre mas que esos y finalmente un incremento.
Se asigna un 1 a la variable valor.
Con el ciclo for inicializamos p en 2 y nos aseguramos que si este es menor que i aumente.
Condicionamos a que si el reciduo de la division de i/p es igual a 0, estableciendo el valor en 0 indicando que el valor no es primo.
*/   
    for(i=2;i<=50;i++) {
       valor = 1;
        for(p=2;p<i;p++) {
            if(i%p==0) {
              valor = 0;
            }    
        }
        
        
/* 
En la condicional if, se imprime si este es primo con la funcion printf.
*/
        if(valor){
            printf("%d ", i);
        }
    }


/* 
Termina el codigo y devuelve 0.
*/
    return 0;
}
