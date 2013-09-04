/**
 * (C) copyright 2011 - Jefferson Campos - foguinho.peruca@gmail.com
 * This program is free software under GPLv3 terms.
 * Este programa implementa a lista de treino 01.
 * Para compilar: gcc -Wall lista_treino_01.c -o lista_treino_01
 */

# include <stdio.h>
# include <stdlib.h>
# define ONE "ONE"
# define TWO "TWO"
# define THREE "THREE"
# define FOUR "FOUR"
# define FIVE "FIVE"

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

  return (9 * celsius + 160)/5;
}

// Exercicio 02
float
cost(float initial_cost)
{
  return (initial_cost * 1.45) * 1.28;
}

// Exercicio 03
void
msg_number(float number)
{
  if (number > 10)
    printf("This number is greatter than 10!!\n");
  else
    printf("Sorry, not greatter than 10!\n");
}

// Exercicio 04
float
major_number(float x, float y)
{
  if (x > y)
    return x;
  else if (x < y)
    return y;
  else
    {
    printf("[The number x and y are the same!!]\n\n");
    return x;
    }
}

// Exercicio 05
void
avg_student(float grade01, float grade02, float grade03)
{
  float final_grade = (grade01 + grade02 + grade03) / 3;
  if (final_grade > 6)
    printf("Your final grade is: %.2f - Good job! You are done it well!!\n", final_grade);
  else if (final_grade >= 5)
    printf("Your final grade is: %.2f - try SAC!!\n", final_grade);
  else
    printf("Your final grade is: %.2f - sorry, try again next time!!\n", final_grade);
}

// TODO: rewrite it using case syntax (I forget it! :P )
// Exercicio 06
void
number_in_words(int number)
{
  if (number > 5 || number < 1)
    {
      printf("Error! Number out of bound! Try 1 ~ 5\n");
      return;
    }
  
  // use case statement
  if (number == 1)
    printf(ONE);
  else if (number == 2)
    printf(TWO);
  else if (number == 3)
    printf(THREE);
  else if (number == 4)
    printf(FOUR);
  else
    printf(FIVE);

  printf("\n");
}

int
main (void)
{

  float height;
  float celsius;
  float initial_cost;
  float tell_number;
  float first_number, second_number;
  float first_grade, second_grade, third_grade;
  int number_words;

  printf("Lista Treino 01!\n");

// Class assigment
// 01 IMC
  printf("Tell us your height:\n");
  scanf("%f", &height);
  printf("%.2f is your *ideal* weight! \n", calcIMC(height));
// 02 triangulo

// Exercicio 01
  printf("Assigment 01) Tell us the temp (in celsius)!\n");
  scanf("%f", &celsius);
  printf("The temp in celsius Fahrenheit is: %.2f\n", convertCelsiusFahrenheit(celsius));

// Exercicio 02
  printf("Assigment 02) Tell us the initial cost:\n");
  scanf("%f", &initial_cost);
  printf("The initial cost is: %.2f. The final cost is: %.2f\n", initial_cost, cost(initial_cost));

// Exercicio 03
  printf("Assigment 03) Tell us the magical number:\n");
  scanf("%f", &tell_number);
  msg_number(tell_number);
  
// Exercicio 04
  printf("Assigment 04) Tell us the first number:\n");
  scanf("%f", &first_number);
  printf("Assigment 04) Tell us the second number:\n");
  scanf("%f", &second_number);
  printf("The major number is:\n %.2f\n", major_number(first_number, second_number));

// Exercicio 05
  printf("Assigment 05) Tell us the first grade:\n");
  scanf("%f", &first_grade);
  printf("Assigment 05) Tell us the second grade:\n");
  scanf("%f", &second_grade);
  printf("Assigment 05) Tell us the third grade:\n");
  scanf("%f", &third_grade);
  avg_student(first_grade, second_grade, third_grade);

// Exercicio 06
  printf("Assigment 06) Tell us the magical number:\n");
  scanf("%i", &number_words);
  number_in_words(number_words);

  return 0;
}
