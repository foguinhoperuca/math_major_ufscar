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
 * Para compilar: gcc -Wall 423114_atividade03.c -o 423114_atividade03 -lm
 * 
 */

# include <stdio.h>
# include <stdlib.h>
# include <math.h>

// Para simplificar, o tamamnho do vetor utilizado em todo os calculos eh pre-determinado!
# define SIZE 5
# define ESCALAR 20
# define PI 3.1415
# define ANG 60.0

/**
 * Calculo da norma de um vetor;
 * Formula: a raiz quadrada da soma de todos os elementos elevados ao quadro;
 */
double
norma(double X[])
{
  int i;
  double norma = 0;
  for (i = 0; i < SIZE; i++)
    {
      norma += pow(X[i], 2);
    }
  return sqrt(norma);
}

/**
 * Exercicio 01 proposto em sala de aula
 */
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

  printf("\n===== Comparing Matrix =====\n");

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      printf("i: %i ; j: %i\n", A[i], B[j]);
    }
}

/**
 * Metodo que imprime o valor da matrix para conferencia
 */
void
verify_matrix(double A[], double B[])
{
  int i, j;

  printf("\n===== verify matrix!! =====\n");

  for (i = 0, j = 4; i < 5; i++, j--)
    {
      printf("i: %i position. Value is: %.2f\n", i, A[i]);
      printf("j: %i position. Value is: %.2f\n", j, B[j]);
    }
}

/**
 * Formula de calculo A [i] *= escalar
 */
void
by_escalar(double escalar, double A[])
{
  int i;

  printf("\n===== Calc by escalar!! =====\n");

  for (i = 0; i < SIZE; i++)
    {
      printf("i: %i position. Value is: %.2f\n", i, A[i] * escalar);
    }
}

/*
 * Forma do calculo: A * B --> (a1 * b1) + (a2 * b2) + (a3 + b3)
 */
double
produto_escalar(double A[], double B[])
{
  int i;
  double C[SIZE], final = 0;
  //  final =  0;

  printf("\n===== Produto escalar =====\n");

  for (i = 0; i < SIZE; i++)
    {
      C[i]  = A[i] * B[i];
      printf("A[%i](%.2f) * B[%i](%.2f) = %.2f\n",i, A[i], i, B[i], C[i]);
    }

  for (i = 0; i < SIZE; i++)
    {
      final += C[i];
    }

  printf("Final is: %.2f!!\n", final);
  return final;
}

/**
 * formula: ||V * W || = ||V|| ||W|| cos "θ"
 */
void
produto_vetorial(double A[], double B[], double ang)
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
 * formula: sen "θ" = V * W / (||V * W ||)
 */
void
calc_ang(double A[], double B[])
{
  double normaA, normaB, ang, prod_escalar;

  printf("\n===== Calc Ang =====\n");

  normaA = norma(A);
  normaB = norma(B);

  if (normaA == 0 || normaB ==0)
    {
      printf("\nError! norma < 0!!\n");
      return;
    }

  prod_escalar = produto_escalar(A, B);
  ang = prod_escalar/(normaA * normaB);

  printf("normaA: %.2f\n", normaA);
  printf("normaB: %.2f\n", normaB);
  printf("ang: %.2f\n", ang);
  printf("acos(%.2f): %.2f\n", ang, acos(ang));
}

int
main (void)
{
  int i, j, populate = 1;
  double A[SIZE], B[SIZE]; 

  printf("\n Informe os valores (%i) para popular a matriz.\n", SIZE);
  printf("Preencha com -1 todos os campos para o sistema criar as matrizes padrao A[0,1,2,3,4] e B[4,3,2,1,0]");
  for (i = 0; i < SIZE; i++)
    {
      printf("\nA[%i] = ", i);
      scanf("%lf", &A[i]);
      printf("\nB[%i] = ", i);
      scanf("%lf", &B[i]);
    }
  for (i = 0; i < SIZE; i++)
    {
    if (A[i] != -1)
      {
      populate = 0;
      break;
      }
    else
      {
      if (B[i] != -1)
	{
	populate = 0;
	break;
	}
      }
    }
  if (populate == 1)
    {
    for (i = 0, j = 4; i < SIZE; i++, j--)
      {
	A[i] = i;
	B[j] = i;
      }
    }

  compare_matrix();
  verify_matrix(A, B);
  by_escalar(ESCALAR, A);
  produto_escalar(A, B);
  produto_vetorial(A, B, ANG);
  calc_ang(A, B);
  
  printf("\n");
  system("PAUSE");

  return 0;
}
