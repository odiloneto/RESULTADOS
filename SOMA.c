/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int indice = 13, soma = 0, k = 0;
    
    while(k < indice) {
        k = k + 1;
        soma = soma + k;
    }
    
    printf("%i", soma);
    
    return 0;
}
