/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a lista de treino 01.
 * Para compilar: gcc -Wall matrix.c -o matrix
 */

# include <stdio.h>
# include <stdlib.h>

# define ESCALAR 20
void
compare_matrix()
{
  int a[5], b[5], i, j;

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      a[i] = i;
      printf("i: %i position. Value is: %i\n", i, a[i]);
      b[j] = i;
      printf("j: %i position. Value is: %i\n", j, b[j]);
    }

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      printf("i: %i ; j: %i\n", a[i], b[j]);
    }
}

void
verify_matrix(int a[], int b[])
{
  int i, j;

  printf("===== verify matrix!! =====\n");

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      printf("i: %i position. Value is: %i\n", i, a[i]);     
      printf("j: %i position. Value is: %i\n", j, b[j]);
    }
}

void
by_escalar(int escalar, int a[])
{
  int i;

  printf("===== Calc by escalar!! =====\n");

  for (i = 0; i < 5; i++)
    {
      printf("i: %i position. Value is: %i\n", i, a[i] * escalar);     
    }
}

void
escalar(int a[], int b[])
{
  int i, c[5], final;
  final =  0;

  printf("===== Produto escalar =====\n");

  for (i = 0; i < 5; i++)
    {
      c[i]  = a[i] * b[i];
      printf("a[%i](%i) * b[%i](%i) = %i\n",i, a[i], i, b[i], c[i]);
    }

  for (i = 0; i < 5; i++)
    {
      final += c[i];
    }

  printf("Final is: %i!!\n", final);
}

/**
 * too boring to implement... :P
 * formula: ||V * W || = ||V|| ||W|| sen
 */
void
produto_vetorial(int a[], int b[])
{
  /* int i c[][]; */

  /* printf("Produto vetorial!!\n"); */

  /* for (i = 0; i < 5; i++) */
  /*   { */
      
  /*     printf("a[%i](value: %i) * b[%i](value: %i) = %i\n", i, a[i], i, b[i],  c[i][i]);      */
  /*   } */
}

int
main (void)
{
  //compare_matrix();

  int a[5], b[5], i, j;

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      a[i] = i;
      /* printf("i: %i position. Value is: %i\n", i, a[i]); */
      b[j] = i;
      /* printf("j: %i position. Value is: %i\n", j, b[j]); */
    }

  verify_matrix(a, b);
  by_escalar(ESCALAR, a);
  escalar(a, b);
  //  produto_vetorial(a, b);
  /* find_ang(a, b); */

  return 0;
}
