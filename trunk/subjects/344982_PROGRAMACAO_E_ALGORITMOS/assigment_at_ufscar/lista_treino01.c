/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a lista de treino 01.
 * Para compilar: gcc -Wall lista_treino_01.c -o lista_treino_01
 */

# include <stdio.h>
# include <stdlib.h>

float
calcIMC(float height)
{
  if (height == 0)
    return 0;

  //  return weight / pow(height, 2);
  return (72.7 * height) - 58;
}

// Exercicio 01
float
convertCelsiusFahrenheit(float celsius)
{

  return 0.0;
}

// Exercicio 02
float
cost()
{
  return 0.0;
}

// Exercicio 03
int
msg_number()
{
  return 0;
}

// Exercicio 04
int
major_number()
{
  return 0;
}

// Exercicio 05
float
avg_student()
{
  return 0.0;
}

// Exercicio 06
char[10]
number_in_words()
{
  return "";
}

int
main (void)
{

  float weight, height;

  printf("Lista Treino 01!\n");

// Exercicio 01
  printf("Tell us your height:\n");
  scanf("%f", &height);

  float imc = calcIMC(height);

  printf("%.2f is your *ideal* weight! \n", imc);

  convertCelsiusFahrenheit(celsius);

// Exercicio 02
  cost();

// Exercicio 03
  msg_number();

// Exercicio 04
  major_number();

// Exercicio 05
  avg_student();

// Exercicio 06
  number_in_words();

  printf("Tell us your weight:\n");
  scanf("%f", &weight);

  return 0;
}
