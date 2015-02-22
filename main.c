#include <stdio.h>
#include <stdlib.h>

#include "complexNumbers.h"
#include "quadraticEquationSolver.h"

int main(int argc, char** argv) {
    
    float a,b,c;
    
    printf("Inserisci a: ");
    scanf("%f", &a);
    printf("Inserisci b: ");
    scanf("%f", &b);
    printf("Inserisci c: ");
    scanf("%f", &c);
    
    complexNumber risultatoX1;
    complexNumber risultatoX2;
    
    risultatoX1 = soluzioneX1( a,  b,  c);
    risultatoX2 = soluzioneX2( a,  b,  c);
    char ris;
      
    printf("\nRisultato...");
    printf("\nx1: %s\nx2: %s\n", formatComplexNumber(risultatoX1), formatComplexNumber(risultatoX2));
     
    return (EXIT_SUCCESS);
}

