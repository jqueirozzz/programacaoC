#include <stdio.h>
int main () {

    int num1 = 1, resultado;

    printf ("Antes Incremento: %d \n", num1);

    //Após o Pós Invremento o valor da variável num1 passa a ser atribuído ao valor +1
    resultado = num1++;
    printf ("Pós Incremento - Número 1: %d  - Resultado: %d\n", num1, resultado); 

    /*Após o Pré incremento o valor que passou a valor 2, pós o incremento na linha 10,
    passa a valer 3, sendo atribuído a 1 e se igualando com o resultado final, pois o valor
    foi pré incrementado e automaticamente atribuído ao resultado*/

    resultado = ++num1;
    printf ("Pré Incremento - Número 1: %d  - Resultado: %d\n", num1, resultado); 
   

    resultado = num1--;
    printf ("Pós Decremento - Número 1: %d  - Resultado: %d\n", num1, resultado);
    
    resultado = --num1;
    printf ("Pré Decremento - Número 1: %d  - Resultado: %d\n", num1, resultado); 

    

}