/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa as atividades propostas durante a aula.
 * Para compilar: gcc -Wall imc.c -o imc
 */

# include <stdio.h>

float
calcIMC(float height)
{
  if (height == 0)
    return 0;

  //  return weight / pow(height, 2);
  return (72.7 * height) - 58;
}

int
main (void)
{

  float weight, height;

  printf("Calc your IMC!\n");

  printf("Tell us your weight:\n");
  scanf("%f", &weight);

  printf("Tell us your height:\n");
  scanf("%f", &height);

  float imc = calcIMC(height);

  printf("%.2f is your *ideal* weight! \n", imc);

  if (weight < imc)
    printf("Very low!\n");
  else if (weight == imc)
    printf("Normal WEIGHT...\n");
  else if(weight > imc)
    printf("little high...\n");

  return 0;
}
