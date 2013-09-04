/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a primeira atividade proposta em sala de aula.
 * Para compilar: gcc -Wall 423114_atividade01.c -o 423114_atividade01
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    int x, y, sum, times;

    printf("Informe o primeiro número [x]:\n");
    scanf("%i", &x);
    printf("Informe o primeiro número [y]:\n");
    scanf("%i", &y);

    sum = x + y;
    times = x * y;

    printf("O primeiro número informado é: %i\n", x);
    printf("O segundo número informado é: %i\n", y);
    printf("O resultado da soma é: %i\n", sum);
    printf("O resultado da multiplicação é: %i\n", times);

    return 0;

}
