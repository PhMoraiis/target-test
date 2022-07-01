#include <stdio.h>

int main(void) 
{
    int numeroQualquer, nFib = 0, numAuxiliar = 0;    
    printf("Informe um numero para calcular a seq. de Fibonacci.\n ");

    scanf("%d", &numeroQualquer);
    while(nFib <1000)
    { 
        printf("%d-", nFib);                   
        nFib = nFib + numAuxiliar;                 
        numAuxiliar = numeroQualquer;
        numeroQualquer = nFib;        
    }
  return 0;
}