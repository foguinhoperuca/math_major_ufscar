/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a lista de treino 01.
 * Para compilar: gcc -Wall serie_harmonica.c -o serie_harmonica -lm
 */

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

void
calc_serie(int n)
{
  float h = 0.0;
  int i;

  for (i = 1; i <= n; i++)
    {
      printf("1/%d \n", i);
      h += (float) 1/i;
      printf("value of h: %.6f\n", h);
      printf("------------------\n");
    }
  printf("The *FINAL* value of h: %.6f\n", h);
}

/**
 * Must converge to PI.
 */
void
conv_serie(int n)
{
  float l = 0.0, pot = 0.0, den = 0.0;
  int i;

  printf("== Convergent Series\n");

  for (i = 0; i <= n; i++)
    {
      pot = pow(-1, i);
      den = ((2 * i) + 1);
      /* printf("Interaction %d \n", i); */
      /* printf("pot: %.2f ; den: %.2f\n", pot, den); */
      l += (float) pot * (4/den);
      /* printf("value of l: %.6f\n", l); */
      /* printf("------------------\n"); */
    }
  printf("The *FINAL* value of l: %.6f\n", l);
}

void
calc_alt()
{
  
}

int
main (void)
{
  int number;

  printf("Tell us the magical number:\n");
  scanf("%d", &number);
  //calc_serie(number);
  //conv_serie(number);
  calc_alt();

  return 0;
}
