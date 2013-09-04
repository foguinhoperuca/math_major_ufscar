/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a segunda atividade proposta.
 *
 * Levar em consideração os seguintes pontos:
 * 0) algoritmo entregue por extenso;
 *
 * Para compilar: gcc -Wall lista_exercicio03_423114.c -o lista_exercicio03_423114
 * 
 */

# include <stdio.h>
# include <stdlib.h>
# define assigment "Atividade 03!"
# define programmer "Jefferson Campos - RA 423114 - foguinho.peruca@gmail.com"
# define license "This program is free software under GPLv3 terms."

void
calc_sist_linear()
{
  int error = 0;
  float a, b, c, d, e, f, x, y, denominador;

  do
    {
      printf("Informe [a]!\n");
      scanf("%f", &a);
      printf("Informe [b]!\n");
      scanf("%f", &b);
      printf("Informe [c]!\n");
      scanf("%f", &c);
      printf("Informe [d]!\n");
      scanf("%f", &d);
      printf("Informe [e]!\n");
      scanf("%f", &e);
      printf("Informe [f]!\n");
      scanf("%f", &f);

      denominador = (a * e) - (b * d);
      //TODO: refactory this!
      if (denominador == 0)
	{
	  error = 1;
	  printf("ERRO! Divisao por 0 impossivel! Digite os dados novamente!!\n");
	}
      else
	{
	  error = 0;
	  printf("Denominador ok!\n");
	}
    } while (error == 1);

  x = ((c * e) - (b * f)) / denominador;
  y = ((a * f) - (c * d)) / denominador;

  printf("O resultado da resolucao eh:\n");
  printf("x: %.2f\n", x);
  printf("y: %.2f\n", y);
}

int
main()
{

  printf(assigment);
  printf("\n");
  printf(programmer);
  printf("\n");
  printf(license);
  printf("\n");

  printf("Executando resolucao sistema linear!\n");
  calc_sist_linear();

  return 0;
}
