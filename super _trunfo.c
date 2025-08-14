#include <stdio.h>

int main() {
   
   char Estado[50];
   char Capital[50];
   char carta[50];
   int populacao[50];   
   float area_emkm2[50];   
   float PIB[50];
   int pontos_turisticos[50];

    printf("Digite o estado: \n");
    scanf("%s", Estado);

    printf("Digite a capital: \n");
    scanf("%s", Capital);

    printf("Digite a carta: \n");
    scanf("%s", carta);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Digite a area em km2: \n");
    scanf("%f", &area_emkm2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);

    printf("Digite os pontos turisticos: \n");
    scanf("%d", &pontos_turisticos );

    printf("Digite o estado: \n");
   scanf("%s", Estado); 

    printf("Digite a capital: \n");
    scanf("%s", Capital);


 /* 
printf("%formato1 %formato2 %formato3",variavel1, variavel2, variavel3);

%d:Imprime um interiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um némero de ponto Flutuante no formato exponencial.
%c: impime um caractere.
%s: imprime uma cadeia (string) de caracteres.
*/

return 0;


}