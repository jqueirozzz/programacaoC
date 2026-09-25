#include <stdio.h>
int main () {

//CARTA 1
    char estado1 [20] = "Bahia";
    char codigo1 [20] = "A01";
    char cidade1 [50] = "Salvador";
    int populacao1 = 2600000;
    float area1 = 693.542;
    float pib1 = 62.95;
    int pontos_turisticos1 = 25;

//CARTA 2
    char estado2 [20] = "Alagoas";
    char codigo2 [20] = "B02";
    char cidade2 [50] = "Maceió";
    int populacao2 = 957916;
    float area2 = 509.3;
    float pib2 = 33.7;
    int pontos_turisticos2 = 15;

//CARTA 3
     char estado3 [20] = "Paraná";
     char codigo3 [20] = "C03";
     char cidade3 [50] = "Curitiba";
     int populacao3 = 1189000;
     float area3 = 500.850;
     float pib3 = 80.00;
     int pontos_turisticos3 = 30;



//EXIBINDO CARTA 1

    printf ("=== CARTA1 === \n");
    printf ("Estado: %s \n", estado1);
    printf ("Código: %s \n", codigo1);
    printf ("Cidade: %s \n", cidade1);
    printf ("População: %d \n", populacao1);
    printf ("Área: %.2f \n", area1);
    printf ("Produto Interno Bruto: %.2f \n", pib1);
    printf ("Pontos Turísticos: %d \n", pontos_turisticos1);

//EXIBINDO CARTA 2

    printf ("=== CARTA 2 === \n");
    printf ("Estado: %s \n", estado2);
    printf ("Codigo: %s \n", codigo2);
    printf ("Cidade: %s \n", cidade2);
    printf ("População: %d \n", populacao2);
    printf ("Área: %.2f \n", area2);
    printf ("Produto Interno Bruto: %.2f \n", pib2);
    printf ("Pontos Turístico: %d \n", pontos_turisticos2);

//EXIBINDO CARTA 3

    printf ("===CARTA3=== \n");
    printf ("Estado: %s \n", estado3);
    printf ("Código: %s \n", codigo3);
    printf ("Cidade: %s \n", cidade3);
    printf ("População: %d \n", populacao3);
    printf ("Área: %.2f \n", area3);
    printf ("Produto Interno Bruto: %.2f \n", pib3);
    printf ("Pontos Turísticos: %d \n", pontos_turisticos3);


    return 0;


}





  





