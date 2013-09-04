/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a primeira atividade proposta em sala de aula.
 * Para compilar: gcc -Wall distancia.c -o distancia
 */

#include <stdio.h>
#include <stdlib.h>

float
calc_dist(float x1, float x2, float y1, float y2)
{
    return (x2 - x1) / (y2 - y1);
}

int
main() {

  float x1, x2, y1, y2;

  printf("Informe o [x1]:\n");
  scanf("%f", &x1);
  printf("Informe o [y1]:\n");
  scanf("%f", &y1);
  printf("Informe o [x2]:\n");
  scanf("%f", &x2);
  printf("Informe o [y2]:\n");
  scanf("%f", &y2);

  printf("O resultado da multiplicação é: %.2f\n", calc_dist(x1, x2, y1, y2));

  return 0;

}
