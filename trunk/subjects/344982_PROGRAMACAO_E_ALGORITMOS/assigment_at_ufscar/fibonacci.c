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
 * Este programa implementa o cálculo de um número fatorial
 * Para compilar: gcc -Wall fibonacci.c -o fibonacci.exe
 * 
 */

# include <stdio.h>
# include <stdlib.h>

long int
fibonacci(int number)
{
  if (number == 0)
    return  0;
  if (number <= 2)
    return 1;
  else
    return fibonacci(number - 1) + fibonacci(number - 2);
}

/*
 * Verificar sobre a aproximacao de Stirling (para aproximacao com numeros grandes):
 * x! ~= sqrt(2 * PI * x) (x/e)^x
 * outra regra:
 * ln(x!) = x * ln(x) - x
 * http://pt.wikipedia.org/wiki/F%C3%B3rmula_de_Stirling
 */
long  int
factorial(int number)
{
  if (number <= 1)
    return 1;
  else
    return number * factorial(number - 1);
}

int
main (void)
{
  int number;

  printf("\nCalculo do fatorial e fibonacci!");
  printf("\nInforme um número!\n");
  scanf("%d", &number);

  printf("O fatorial eh: %ld\n", factorial(number));
  printf("O fibonacci eh: %ld\n", fibonacci(number));
  return 0;
}
