/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * This program is free software under GPLv3 terms.
 * 
 * Este programa implementa a atividade proposta em sala de aula - OCT-24-2011 - 344982_PROGRAMACAO_E_ALGORITMOS.
 * Para compilar: gcc -Wall matrix.c -o matrix -lm
 * 
 */

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define ESCALAR 20
# define SIZE 5
# define PI 3.1415

float
norma(int X[])
{
  int i, norma = 0;
  for (i = 0; i < SIZE; i++)
    {
      norma += pow(X[i], 2);
    }
  return sqrt(norma);
}


void
compare_matrix()
{
  int A[5], B[5], i, j;

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      A[i] = i;
      printf("i: %i position. Value is: %i\n", i, A[i]);
      B[j] = i;
      printf("j: %i position. Value is: %i\n", j, B[j]);
    }

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      printf("i: %i ; j: %i\n", A[i], B[j]);
    }
}

void
verify_matrix(int A[], int B[])
{
  int i, j;

  printf("===== verify matrix!! =====\n");

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      printf("i: %i position. Value is: %i\n", i, A[i]);
      printf("j: %i position. Value is: %i\n", j, B[j]);
    }
}

void
by_escalar(int escalar, int A[])
{
  int i;

  printf("\n===== Calc by escalar!! =====\n");

  for (i = 0; i < SIZE; i++)
    {
      printf("i: %i position. Value is: %i\n", i, A[i] * escalar);
    }
}

/*
 * Forma do calculo: A * B --> (a1 * b1) + (a2 * b2) + (a3 + b3)
 */
void
produto_escalar(int A[], int B[])
{
  int i, C[SIZE], final;
  final =  0;

  printf("\n===== Produto escalar =====\n");

  for (i = 0; i < SIZE; i++)
    {
      C[i]  = A[i] * B[i];
      printf("A[%i](%i) * B[%i](%i) = %i\n",i, A[i], i, B[i], C[i]);
    }

  for (i = 0; i < SIZE; i++)
    {
      final += C[i];
    }

  printf("Final is: %i!!\n", final);
}

/**
 * too boring to implement... :P
 * formula: ||V * W || = ||V|| ||W|| cos "θ"
 */
void
produto_vetorial(int A[], int B[], double ang)
{
  double normaA, normaB, prod_vet;

  printf("\n===== Produto Vetorial =====\n");

  normaA = norma(A);
  normaB = norma(B);

  prod_vet = normaA * normaB * sin (ang * PI/180);

  printf("normaA: %.2f\n", normaA);
  printf("normaB: %.2f\n", normaB);
  printf("sin: %.2f\n", cos (ang * PI/180));
  printf("prod_vet: %.2f\n", prod_vet);
}

/**
 * formula: sen "θ" = ||V * W || = ||V|| ||W||
 */
void
calc_ang(int A[], int B[])
{
  double normaA, normaB, ang;

  printf("\n===== Calc Ang =====\n");

  normaA = norma(A);
  normaB = norma(B);

  if (normaA == 0 || normaB ==0)
    {
      printf("\nError! norma < 0!!\n");
      return;
    }

  ang = (normaA * normaB);

  printf("normaA: %.2f\n", normaA);
  printf("normaB: %.2f\n", normaB);
  // printf("sin: %.2f\n", sin (ang * PI/180));
}

int
main (void)
{
  //compare_matrix();

  int a[SIZE], b[SIZE], i, j;

  for (i = 0, j = 4; i < SIZE; i++, j--)
    {
      a[i] = i;
      /* printf("i: %i position. Value is: %i\n", i, a[i]); */
      b[j] = i;
      /* printf("j: %i position. Value is: %i\n", j, b[j]); */
    }

  verify_matrix(a, b);
  by_escalar(ESCALAR, a);
  produto_escalar(a, b);
  produto_vetorial(a, b, 60.0);
  /* find_ang(a, b); */

  return 0;
}
