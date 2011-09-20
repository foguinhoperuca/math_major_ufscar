/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a segunda atividade proposta.
 *
 * Levar em consideração os seguintes pontos:
 * 0) algoritmo entregue por extenso;
 * 1) Por ser um curso introdutorio, as funcoes de raiz quadrada e potencia 
 * serao abstraidas, como se fossem as funcoes da biblioteca math.c do C
 * 2) A implementacao do algoritmo em C eh mais sofisticada do que o algoritmo
 * descrito por extenso. Isso deve-se a particularidade da linguagem que
 * sao propicias a essa implementacao.
 * 3) Considerar que cada funcao (item01 e item02) implementam um exercicio
 * proposto, cada. No algoritmo entregue, elas estao em programas separados.
 * Aqui elas aparecem separadas por funcao, por conveniencia na hora
 * de compilar o programa.
 *
 * Para compilar: gcc -Wall 423114_atividade02.c -o 423114_atividade02
 * 
 */

# include <stdio.h>
# include <stdlib.h>
# include <math.h>
# define assigment "Atividade 02!"
# define programmer "Jefferson Campos - RA 423114 - foguinho.peruca@gmail.com"
# define license "This program is free software under GPLv3 terms."

// TODO fix sqrt function
// TODO use float number instead int type
void
item01()
{
  int number;

  printf("Informe um numero!\n");
  scanf("%f", &number);
  
    if (number % 2 == 0)
    {
      printf("O numero %.2f é par!!\n", number);
      printf("A raiz quadrada do número é: %.2f\n", sqrt(number));
    }
  else
    {
      printf("O numero %.2f é impar!!\n", number);
      printf("A raiz quadrada do número é: %.2f\n", pow(number, 2));
    }

}

void
item02()
{
  int month;

  do
    {
      printf("Informe o mês [1-12]!\n");
      scanf("%d", &month);
      if (month < 1 || month > 12)
	{
	  printf("Mês informado incorretamente! Informe um número 1-12!\n");
	}
    } while (month < 1 || month > 12);

  switch (month)
    {
    case 1:
      printf("Janeiro\n");
      break;
    case 2:
      printf("Fevereiro\n");
      break;
    case 3:
      printf("Marco\n");
      break;
    case 4:
      printf("Abril\n");
      break;
    case 5:
      printf("Maio\n");
      break;
    case 6:
      printf("Junho\n");
      break;
    case 7:
      printf("Julho\n");
      break;
    case 8:
      printf("Agosto\n");
      break;
    case 9:
      printf("Setembro\n");
      break;
    case 10:
      printf("Outubro\n");
      break;
    case 11:
      printf("Novembro\n");
      break;
    case 12:
      printf("Dezembro\n");
      break;
    }
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

  printf("Executando Item 01!\n");
  item01();

  printf("Executando item 02!\n");
  item02();

  return 0;
}
