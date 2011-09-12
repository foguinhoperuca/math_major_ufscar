/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa as atividades propostas durante a aula.
 * Para compilar: gcc -Wall calc_vol.c -o calc_col
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.1415

/**
 * V = PI * r^2 * h
 */
float
calc_vol(float r, float h)
{
  return PI * pow(r, 2) * h;
}


int
main() {

  float r, h;

  printf("Informe o [r]:\n");
  scanf("%f", &r);\
  printf("Informe o [h]:\n");
  scanf("%f", &h);

  printf("The volume is: %.4f\n", calc_vol(r, h));

  return 0;

}
