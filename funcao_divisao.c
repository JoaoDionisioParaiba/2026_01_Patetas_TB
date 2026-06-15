#include <stdio.h>
#include "funcao_divisao.h"

float dividir(float num1, float num2) {
    if (num2 == 0) {
        printf("Erro: Divisao por zero nao e permitida.\n");
        return 0; 
    }

    return num1 / num2;
}