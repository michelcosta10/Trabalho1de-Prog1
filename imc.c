#include <stdio.h>
#include <stdlib.h>

int main()
{
    float altura, peso;
    float result;
    
    printf("Informe sua peso: \n");
    scanf("%f", &peso);
    
    printf("Informe seu altura: \n");
    scanf("%f", &altura);
    
    result = peso / (altura * altura);
   
    printf("Seu IMC = %f\n", result);
    
    if(result < 19){
              printf("Voce esta magro(a)!\n");
              }
             if((result >= 20) && (result <= 25)){
                         printf("Voce esta no peso ideal!\n");
                         }
                         if((result >= 26) && (result <= 30)){
                                    printf("Voce esta acima do peso!\n");
                                    }
                                    if (result > 31){
                                       printf("Voce esta Obeso(a)!\n");
                                        }
    system("pause");
    return 0;
    
}
